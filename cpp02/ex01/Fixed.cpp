#include "Fixed.hpp"

Fixed::Fixed(){
	fp_number = 0;
	std::cout << "Default constructor called\n";
}
Fixed::Fixed(const Fixed &obj){
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
	// std::cout << "getRawBits member function called\n";
	return (fp_number);
}
void Fixed::setRawBits( int const raw ){
	std::cout << "setRawBits member function called\n";
	fp_number = raw;
}

Fixed::Fixed(const int num){
	std::cout << "int constructor called\n";
	fp_number = num << fractional_bits;
}

Fixed::Fixed(const float num){
	std::cout << "float constructor called\n";
	fp_number = num * (1 << fractional_bits);
}

float Fixed::toFloat( void ) const{
	return (fp_number >> fractional_bits);
}
int Fixed::toInt( void ) const{
	return (fp_number >> fractional_bits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj){
	out << obj.getRawBits() / double(256);
	return out;
}