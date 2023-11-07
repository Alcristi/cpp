#include "Fixed.hpp"

class Point
{
private:
    Fixed const _x;
    Fixed const _y;
public:
    Point(/* args */);
    Point(float const &x, float const &y);
    ~Point();
    Fixed const getX(void) const;
    Fixed const getY(void) const;
    Point(Point const &src);
    Point &operator=(Point const &rhs);
    Fixed const getDistance(Point const &rhs) const;
};

