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
		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);
		bool operator==(Fixed const &a);
		bool operator!=(Fixed const &a);
		bool operator<(Fixed const &a) const ;
		bool operator>(Fixed const &a) const ;
		bool operator<=(Fixed const &a);
		bool operator>=(Fixed const &a);
		Fixed operator+(Fixed const &a);
		Fixed operator-(Fixed const &a);
		int toInt(void) const;
		float toFloat(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed &operator=(const Fixed &equal);
		Fixed operator+(Fixed const &b) const;
		Fixed operator*(Fixed const &b) const;
		Fixed operator/(Fixed const &b) const;
		Fixed operator-(Fixed const &b) const;
		static Fixed        &min(Fixed &a, Fixed &b);
    	const static Fixed  &min(const Fixed &a, const Fixed &b);
    	static Fixed        &max(Fixed &a, Fixed &b);
    	const static Fixed  &max(const Fixed &a, const Fixed &b);

	private:
		int value;
};

std::ostream &operator<<(std::ostream &cout, Fixed const &value);

#endif
