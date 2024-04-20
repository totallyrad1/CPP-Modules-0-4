#include "Fixed.hpp"

Fixed::Fixed(){
	fp_number = 0;
	std::cout << "Default constructor called\n";
}
Fixed::Fixed(Fixed &obj){
	this->fp_number = obj.fp_number;
	std::cout << "Copy constructor called\n";
}
Fixed::~Fixed(){
	std::cout << "Destructor called\n";
}
Fixed &Fixed::operator=(const Fixed &obj){
	std::cout << "Copy assignment operator called\n";
	if(this != &obj)
		this->fp_number = obj.fp_number;
	return *this;
}
int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called\n";
	return (fp_number);
}
void Fixed::setRawBits( int const raw ){
	std::cout << "setRawBits member function called\n";
	fp_number = raw;
}