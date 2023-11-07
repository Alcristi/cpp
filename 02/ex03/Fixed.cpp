#include "Fixed.hpp"
#include <iostream>
#include <cmath>
Fixed::Fixed(void) : _fixedPointValue(0)
{
}

Fixed::Fixed(int const value)
{
    this->_fixedPointValue = value << this->_fractionalBits;
}

Fixed::Fixed(float const value)
{
    this->_fixedPointValue = roundf(value * (1 << this->_fractionalBits));
}

Fixed::Fixed(Fixed const &src)
{
    *this = src;
}

Fixed::~Fixed(void)
{
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
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

Fixed Fixed::operator++()
{
    this->_fixedPointValue++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed Fixed::operator+(Fixed const &rhs)
{
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const &rhs)
{
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const &rhs)
{
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const &rhs)
{
    return Fixed(this->toFloat() / rhs.toFloat());
}

bool Fixed::operator>(Fixed const &rhs) const
{
    return this->toFloat() > rhs.toFloat();
}

bool Fixed::operator<(Fixed const &rhs) const
{
    return this->toFloat() < rhs.toFloat();
}

bool Fixed::operator>=(Fixed const &rhs) const
{
    return this->toFloat() >= rhs.toFloat();
}

bool Fixed::operator<=(Fixed const &rhs) const
{
    return this->toFloat() <= rhs.toFloat();
}

bool Fixed::operator==(Fixed const &rhs) const
{
    return this->toFloat() == rhs.toFloat();
}

bool Fixed::operator!=(Fixed const &rhs) const
{
    return this->toFloat() != rhs.toFloat();
}

Fixed Fixed::operator--()
{
    this->_fixedPointValue--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return tmp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return a < b ? a : b;
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
    return a < b ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return a > b ? a : b;
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
    return a > b ? a : b;
}
