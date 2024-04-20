#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
	private:
		int fp_number;
		static const int fractional_bits = 8;
	public:
		Fixed();
		Fixed(Fixed &);
		Fixed &operator=(const Fixed &obj);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );

};

#endif