
Point::Point(/* args */)
{
}

Point::~Point()
{
}

Point::Point(float const &x, float const &y) : _x(x), _y(y)
{
}

Point::Point(Point const &src) : _x(src._x), _y(src._y)
{
}

Point &Point::operator=(Point const &rhs)
{
    if (this != &rhs)
    {
        this->_x = rhs._x;
        this->_y = rhs._y;
    }
    return *this;
}

Fixed const Point::getX(void) const
{
    return this->_x;
}

Fixed const Point::getY(void) const
{
    return this->_y;
}

Fixed const Point::getDistance(Point const &rhs) const
{
    return Fixed(sqrt(pow(rhs.getX().toFloat() - this->getX().toFloat(), 2) + pow(rhs.getY().toFloat() - this->getY().toFloat(), 2)));
}   