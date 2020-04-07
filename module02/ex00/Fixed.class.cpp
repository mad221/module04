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

Fixed::Fixed(int nbr)
{
	this->value = nbr;

}

Fixed &Fixed::operator=(const Fixed &nbr)
{
	  std::cout << "Assignation operator called" << std::endl;
    if (this != &nbr)
    {
        this->value = nbr.getRawBits();
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
