#include "Fixed.class.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

float Fixed::toFloat(void) const
{
	return ((float)value / (1 << _sizebit));
}

int Fixed::toInt(void) const
{
	return (this->value >> _sizebit);
}

Fixed::Fixed(const float nbr)
{
    this->value = roundf(nbr * (1 << _sizebit));
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const int nbr)
{
	this->value = nbr << _sizebit;
	std::cout << "Int constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &equal)
{
	std::cout << "Assignation operator called" << std::endl;
    if (this != &equal)
    {
        this->value = equal.getRawBits();
    }
    return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
	std::cout << "stdRawBits member function called" << std::endl;
}

std::ostream &operator<<(std::ostream &cout, Fixed const &value)
{
    cout << value.toFloat();
    return (cout);
}

Fixed Fixed::operator++()
{
	value++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++*this;
	return (tmp);
}

Fixed Fixed::operator--()
{
	value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--*this;
	return (tmp);
}

bool Fixed::operator==(Fixed const& a)
{
	return (a.value == this->value);
}

bool Fixed::operator!=(Fixed const& a)
{
	return !(a.value == this->value);
}

bool Fixed::operator<(Fixed const& a) const
{
	return (this->value < a.value);
}

bool Fixed::operator>(Fixed const& a) const
{
	return (this->value > a.value);
}

bool Fixed::operator<=(Fixed const& a)
{
	return (this->value <= a.value);
}

bool Fixed::operator>=(Fixed const& a)
{
	return (this->value >= a.value);
}


Fixed Fixed::operator+(Fixed const &b) const
{
	return (Fixed(this->toFloat() + b.toFloat()));
}

Fixed Fixed::operator*(Fixed const &b) const
{
	return (Fixed(this->toFloat() * b.toFloat()));
}

Fixed Fixed::operator/(Fixed const &b) const
{
	return (Fixed(this->toFloat() / b.toFloat()));
}

Fixed Fixed::operator-(Fixed const &b) const
{
	return (Fixed(this->toFloat() - b.toFloat()));
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}


const Fixed
&Fixed::min( const Fixed &a, const Fixed &b)
{
    return (a < b ? a : b);
}

const Fixed &Fixed::max( const Fixed &a, const Fixed &b)
{
    return (a > b ? a : b);
}
