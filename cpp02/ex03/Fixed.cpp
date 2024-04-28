#include "Fixed.hpp"

Fixed::Fixed(){
	fp_number = 0;
	// std::cout << "Default constructor called\n";
}
Fixed::Fixed(const Fixed &obj){
	this->fp_number = obj.fp_number;
	// std::cout << "Copy constructor called\n";
}
Fixed::~Fixed(){
	// std::cout << "Destructor called\n";
}
Fixed &Fixed::operator=(const Fixed &obj){
	// std::cout << "Copy assignment operator called\n";
	if(this != &obj)
		this->fp_number = obj.fp_number;
	return *this;
}
int Fixed::getRawBits( void ) const{
	// std::cout << "getRawBits member function called\n";
	return (fp_number);
}
void Fixed::setRawBits( int const raw ){
	// std::cout << "setRawBits member function called\n";
	fp_number = raw;
}

Fixed::Fixed(const int num){
	// std::cout << "int constructor called\n";
	fp_number = num << fractional_bits;
}

Fixed::Fixed(const float num){
	// std::cout << "float constructor called\n";
	fp_number = num * (1 << fractional_bits);
}

float Fixed::toFloat( void ) const{
	return float(fp_number);
}
int Fixed::toInt( void ) const{
	return int(fp_number);
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj){
	out << obj.getRawBits() / double(256);
	return out;
}

bool Fixed::operator>(const Fixed &obj){
	if(this->fp_number > obj.fp_number)
		return 1;
	else
		return 0;
}
bool Fixed::operator<(const Fixed &obj){
	if(this->fp_number < obj.fp_number)
		return 1;
	else
		return 0;
}
bool Fixed::operator>=(const Fixed &obj){
	if(this->fp_number >= obj.fp_number)
		return 1;
	else
		return 0;
}
bool Fixed::operator<=(const Fixed &obj){
	if(this->fp_number <= obj.fp_number)
		return 1;
	else
		return 0;
}
bool Fixed::operator==(const Fixed &obj){
	if(this->fp_number == obj.fp_number)
		return 1;
	else
		return 0;
}
bool Fixed::operator!=(const Fixed &obj){
	if(this->fp_number != obj.fp_number)
		return 1;
	else
		return 0;
}

Fixed &Fixed::operator+(const Fixed &obj){
	this->fp_number = this->fp_number + obj.fp_number;
	return *this;
}
Fixed &Fixed::operator*(const Fixed &obj){
	this->fp_number = (this->fp_number * obj.fp_number) / 256;
	return *this;
}
Fixed &Fixed::operator-(const Fixed &obj){
	this->fp_number = this->fp_number - obj.fp_number;
	return *this;
}
Fixed &Fixed::operator/(const Fixed &obj){
	this->fp_number = Fixed(this->toFloat() / obj.toFloat()).getRawBits();
	return *this;
}

Fixed &Fixed::operator++(){
	this->fp_number++;
	return *this;
}
Fixed Fixed::operator++(int){
	Fixed tmp = *this;
	++fp_number;
	return tmp;
}
Fixed &Fixed::operator--(){
	this->fp_number--;
	return *this;
}
Fixed Fixed::operator--(int){
	Fixed tmp = *this;
	--fp_number;
	return tmp;
}

const Fixed &Fixed::min(const Fixed &obj,const Fixed &obj2){
	if(obj.getRawBits() < obj2.getRawBits())
		return obj;
	else
		return obj2;
}

const Fixed &Fixed::max(const Fixed &obj,const Fixed &obj2){
	if(obj.getRawBits() < obj2.getRawBits())
		return obj2;
	else
		return obj;
}