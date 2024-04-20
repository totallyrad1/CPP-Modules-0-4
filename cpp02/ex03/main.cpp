#include "Point.hpp"

int main( void ){
	Point a(-1, 10);
	Point b(1, -1);
	Point c(0, 0);
	Point point(0.5, 0.6);
	Point test;
	bool result = test.bsp(a,b,c,point);
	std::cout << result << std::endl;
	return 0;
}