#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const Fixed x, const Fixed y) : x(x), y(y) {}

Point::Point(const Point &copy) {
	*this = copy;
}

Point::~Point(void) {}

Point &Point::operator=(const Point &assign) {
    (Fixed)this->x = assign.getX();
    (Fixed)this->y = assign.getY();
    return (*this);
}

Fixed Point::getX(void) const {
    return this->x;
}

Fixed Point::getY(void) const {
    return this->y;
}