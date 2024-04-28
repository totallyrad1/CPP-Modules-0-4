#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
	private:
		int fp_number;
		static const int fractional_bits = 8;
	public:
		Fixed();
		Fixed(const int);
		Fixed(const float);
		Fixed(const Fixed &obj);
		Fixed &operator=(const Fixed &obj);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;

		bool operator>(const Fixed &obj);
		bool operator<(const Fixed &obj);
		bool operator>=(const Fixed &obj);
		bool operator<=(const Fixed &obj);
		bool operator==(const Fixed &obj);
		bool operator!=(const Fixed &obj);

		Fixed &operator+(const Fixed &obj);
		Fixed &operator*(const Fixed &obj);
		Fixed &operator-(const Fixed &obj);
		Fixed &operator/(const Fixed &obj);

		Fixed &operator++();
		Fixed operator++(int);
		Fixed &operator--();
		Fixed operator--(int);
		
		static const Fixed &min(const Fixed &obj,const Fixed &obj2);
		static const Fixed &max(const Fixed &obj,const Fixed &obj2);
};
std::ostream &operator<<(std::ostream &out, const Fixed &obj);

#endif