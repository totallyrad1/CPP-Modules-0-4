#include "Point.hpp"

Point::Point() : x(Fixed(0)), y(Fixed(0)){
}
Point::Point(const float x1, const float y1) : x(Fixed(x1)), y(Fixed(y1)){

}
Point::~Point(){
	// std::cout << "destructor called\n";
}
Point::Point(const Point &obj): x(obj.x), y(obj.y){
}
Point Point::operator=(const Point &obj){
	(void)obj;
	return *this;
}

Fixed Point::calc_tri_space(Point const p1, Point const p2, Point const p3){
	Fixed x1, x2, x3;
	Fixed y1, y2, y3;
	x1 = p1.x;
	x2 = p2.x;
	x3 = p3.x;
	y1 = p1.y;
	y2 = p2.y;
	y3 = p3.y;
	Fixed res = (x1 * (y2 - y3)) + (x2 * (y3 - y1)) + (x3 * (y1 - y2));
	if(res < 0)
		res = res * -1;
	return (res / 2);
}

bool Point::bsp(Point const a, Point const b, Point const c, Point const point){
	Fixed pbc = calc_tri_space(point, b ,c);
	Fixed pab = calc_tri_space(point, b , a);
	Fixed pca = calc_tri_space(point, a ,c);
	Fixed lhrba =  calc_tri_space(a, b, c);
	
	if(lhrba == (pbc + pab + pca) && pbc != 0 && pab != 0 && pca != 0)
		return 1;
	else
		return 0;
}
