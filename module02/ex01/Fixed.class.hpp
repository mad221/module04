#ifndef _FIXED_CLASS_
#define _FIXED_CLASS_
#include <iostream>

#include <cmath>

const int _sizebit = 8;

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &cpy);
		Fixed(const float nbr);
		Fixed(const int a);
		int toInt(void) const;
		float toFloat(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed &operator=(const Fixed &equal);

	private:
		int value;
};

std::ostream &operator<<(std::ostream &cout, Fixed const &value);

#endif
