#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float x, const float y) : x(x), y(y) {}

Point::Point(const Point &copy) {
	*this = copy;
}

Point::~Point(void) {}

Point &Point::operator=(const Point &assign) {
    (Fixed)x = assign.getX();
    (Fixed)y = assign.getY();
    return (*this);
}

Fixed Point::getX(void) const {
    return this->x;
}

Fixed Point::getY(void) const {
    return this->y;
}