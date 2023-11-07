#include <iostream>

class Fixed
{
public:
	Fixed(void);
	~Fixed(void);
	Fixed(int const value);
	Fixed(float const value);
	Fixed(Fixed const &src);

	Fixed &operator=(Fixed const &rhs);
	/* Operador de aritmético*/
	Fixed operator+(Fixed const &);
	Fixed operator-(Fixed const &);
	Fixed operator*(Fixed const &);
	Fixed operator/(Fixed const &);

	/* Operador de Comparação*/
	bool operator>(Fixed const &) const;
	bool operator<(Fixed const &) const;
	bool operator>=(Fixed const &) const;
	bool operator<=(Fixed const &) const;
	bool operator==(Fixed const &) const;
	bool operator!=(Fixed const &) const;

	Fixed operator++();
	Fixed operator++(int);
	Fixed operator--();
	Fixed operator--(int);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed const &min(Fixed const &a, Fixed const &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static Fixed const &max(Fixed const &a, Fixed const &b);

private:
	int _fixedPointValue;
	static const int _fractionalBits = 8;
};
std::ostream &operator<<(std::ostream &os, const Fixed &rhs);