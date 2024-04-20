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
	return (fp_number >> fractional_bits);
}
int Fixed::toInt( void ) const{
	return (fp_number >> fractional_bits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj){
	out << obj.getRawBits() / (double)256;
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

const Fixed &Fixed::operator+(const Fixed &obj){
	Fixed *result;
	result = this;
	result->fp_number = this->fp_number + obj.fp_number;
	return *result;
}
const Fixed &Fixed::operator*(const Fixed &obj){
	Fixed *result;
	result = this;
	result->fp_number = this->fp_number * obj.fp_number;
	return *result;
}
const Fixed &Fixed::operator-(const Fixed &obj){
	Fixed *result;
	result = this;;
	result->fp_number = this->fp_number - obj.fp_number;
	return *result;
}
const Fixed &Fixed::operator/(const Fixed &obj){
	Fixed *result;
	result = this;
	result->fp_number = this->fp_number / obj.fp_number;
	return *result;
}

Fixed &Fixed::operator++(){
	this->fp_number++;
	return *this;
}
Fixed Fixed::operator++(int number){
	(void)number;
	Fixed tmp = *this;
	++fp_number;
	return tmp;
}
Fixed &Fixed::operator--(){
	this->fp_number--;
	return *this;
}
Fixed Fixed::operator--(int number){
	(void)number;
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