#include "Point.hpp"

Point::Point(){
	Fixed temp(0);
	x = temp;
	y = temp;
}
Point::Point(const float x, const float y){
	Fixed temp(x);
	Fixed temp1(y);
	this->x = temp;
	this->y = temp1;
}
Point::~Point(){
	// std::cout << "destructor called\n";
}
Point::Point(const Point &obj){
	this->x = obj.x;
	this->y = obj.y;
}
Point Point::operator=(const Point &obj){
	Point res;
	res.x = obj.x;
	res.y = obj.y;
	return res;
}

float Point::calc_tri_space(Point const p1, Point const p2, Point const p3){
	float x1, x2, x3;
	float y1, y2, y3;
	x1 = p1.x.toFloat();
	x2 = p2.x.toFloat();
	x3 = p3.x.toFloat();
	y1 = p1.y.toFloat();
	y2 = p2.y.toFloat();
	y3 = p3.y.toFloat();
	// std::cout << "x1 " << x1 << " x2 " << x2 << " x3 " << x3 << std::endl;
	// std::cout << "y1 " << y1 << " y2 " << y2 << " y3 " << y3 << std::endl;
	float res = (x1 * (y2 - y3)) + (x2 * (y3 - y1)) + (x3 * (y1 - y2));
	if(res < 0)
		res = res * -1;
	return (res * 0.5);
}

bool Point::bsp(Point const a, Point const b, Point const c, Point const point){
	float pbc = calc_tri_space(point, b ,c);
	float pab = calc_tri_space(point, a ,b);
	float pca = calc_tri_space(point, a ,c);
	float lhrba =  calc_tri_space(a, b, c);
	
	if(lhrba == pbc + pab + pca)
		return 1;
	else
		return 0;
}
