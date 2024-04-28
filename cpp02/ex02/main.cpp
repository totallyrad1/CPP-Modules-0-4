#include "Fixed.hpp"

int main( void ){
	Fixed a;
	Fixed const b( Fixed( 5.05f ) / Fixed( 2 ) );
	std::cout << "a is : " << a << std::endl;
	std::cout << "++a is : " << ++a << std::endl;
	std::cout << "a is : " << a << std::endl;
	std::cout << "a++ is : " << a++ << std::endl;
	std::cout << "a is : " << a << std::endl;
	std::cout << "b is : " << b << std::endl;
	std::cout << "max is : "<< Fixed::max( a, b ) << std::endl;
	std::cout << "min is : "<< Fixed::min( a, b ) << std::endl;
	if( a > b )
		std::cout << a << " is greater than " << b << std::endl;
	else
		std::cout << a << " is not greater than " << b << std::endl;
	if( a < b )
		std::cout << a << " is less than " << b << std::endl;
	else
		std::cout << a << " is not less than " << b << std::endl;
	if( a >= b )
		std::cout << a << " is greater or equal to " << b << std::endl;
	else
		std::cout << a << " is not greater or equal to " << b << std::endl;
	if( a <= b )	
		std::cout << a << " is less or equal to " << b << std::endl;
	else
		std::cout << a << " is not less or equal to " << b << std::endl;
	if( a == b )
		std::cout << a << " is equal to " << b << std::endl;
	else
		std::cout << a << " is not equal to " << b << std::endl;
	if( a != b )
		std::cout << a << " is not equal to " << b << std::endl;
	else
		std::cout << a << " is equal to " << b << std::endl;
	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b = " << a - b << std::endl;
	std::cout << "a * b = " << a * b << std::endl;
	std::cout << "a / b = " << a / b << std::endl;
	std::cout << "b++ is " << a++ << std::endl;
	std::cout << "++b is " << ++a << std::endl;
	std::cout << "b-- is " << a-- << std::endl;
	std::cout << "--b is " << --a << std::endl;
	return 0;
}