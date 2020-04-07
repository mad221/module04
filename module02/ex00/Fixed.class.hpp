#ifndef _FIXED_CLASS_
#define _FIXED_CLASS_
#include <iostream>

const int _sizebit = 8;

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &cpy);
		Fixed(const float nbr);
		Fixed(const int nbr);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed &operator=(const Fixed &nbr);

	private:
		int value;
};

#endif
