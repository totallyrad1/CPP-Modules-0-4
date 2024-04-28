#include "Point.hpp"

int main( void ){
	Point a(0, 0);
	Point b(1, 0);
	Point c(0, 1);
	Point point(0.3, 0.3);
	Point test;
	bool result = test.bsp(a,b,c,point);
	std::cout << result << std::endl;
	return 0;
}