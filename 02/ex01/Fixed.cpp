#include "Fixed.hpp"
#include <iostream>
#include <cmath>
Fixed::Fixed(void) : _fixedPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const value)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPointValue = value << this->_fractionalBits;
}

Fixed::Fixed(float const value)
{
    std::cout << "Float constructor called" << std::endl;
    this->_fixedPointValue = roundl(value * (1 << this->_fractionalBits));
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
        this->_fixedPointValue = rhs.getRawBits();
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Fixed &rhs)
{
    os << rhs.toFloat();
    return os;
}

int Fixed::getRawBits(void) const
{
    return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPointValue = raw;
}

float Fixed::toFloat(void) const
{
    return float(this->_fixedPointValue) / (1 << this->_fractionalBits);
}

int Fixed::toInt(void) const
{
    return this->_fixedPointValue >> this->_fractionalBits;
}
