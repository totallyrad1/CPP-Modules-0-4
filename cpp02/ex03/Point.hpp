#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
class Point{
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point();
		Point(const float n1, const float n2);
		~Point();
		Point(const Point &);
		Point operator=(const Point &obj);
		bool bsp( Point const a, Point const b, Point const c, Point const point);
		float calc_tri_space(Point const tri1, Point const tri2, Point const tri3);
};

#endif