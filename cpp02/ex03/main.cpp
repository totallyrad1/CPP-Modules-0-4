#include "Point.hpp"

int main( void ){
	Point a(1, 1);
	Point b(4, 4);
	Point c(4, 1);
	Point point(0.5, 0.6);
	Point test;
	bool result = test.bsp(a,b,c,point);
	std::cout << result << std::endl;
	return 0;
}