#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
// A = x1(y2 − y3) + x2(y3 − y1) + x3(y1 − y2)
class Point{
	private:
		Fixed x;
		Fixed y;
	public:
		Point();
		Point(const float n1, const float n2);
		~Point();
		// Point(Point &);
		// Fixed &operator=(const int num);
		bool bsp( Point const a, Point const b, Point const c, Point const point);
		float calc_tri_space(Point const tri1, Point const tri2, Point const tri3);
};

#endif