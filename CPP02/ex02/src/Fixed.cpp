#include "Fixed.hpp"

// Constructors
Fixed::Fixed() {
	this->number = 0;
}

Fixed::Fixed(const Fixed &copy) {
	*this = copy;
}

Fixed::Fixed(const int value) {
	this->number = value * (1 << Fixed::bits);
}

Fixed::Fixed(const float value) {
	this->number = roundf(value * (1 << Fixed::bits));
}

// Destructor
Fixed::~Fixed() {
	cout << "\e[0;31mDestructor called\e[0m" << endl;
}

// Operators
Fixed &Fixed::operator=(const Fixed &assign) {
	this->number = assign.getRawBits();
	return *this;
}

/*Fixed &Fixed::operator>(const Fixed &assign) {

}

Fixed &Fixed::operator<(const Fixed &assign) {
	
}

Fixed &Fixed::operator>=(const Fixed &assign) {
	
}

Fixed &Fixed::operator<=(const Fixed &assign) {
	
}

Fixed &Fixed::operator==(const Fixed &assign) {
	
}

Fixed &Fixed::operator!=(const Fixed &assign) {
	
}

Fixed &Fixed::operator+(const Fixed &assign) {
	
}

Fixed &Fixed::operator-(const Fixed &assign) {
	
}

Fixed &Fixed::operator*(const Fixed &assign) {
	
}

Fixed &Fixed::operator/(const Fixed &assign) {
	
} */

// Getters / Setters
int Fixed::getRawBits(void) const {
	return this->number;
}

void Fixed::setRawBits(int const bits) {
	this->number = bits;
}

int Fixed::toInt(void) const {
	return this->number >> Fixed::bits;
}

float Fixed::toFloat(void) const {
	return (float)this->number / (float)(1 << Fixed::bits);
}

/* Fixed &Fixed::min(Fixed &number, Fixed &secondNumber) {
	
}

Fixed &Fixed::min(const Fixed &number, const Fixed &secondNumber) {

}

Fixed &Fixed::max(Fixed &number, Fixed &secondNumber) {

}

Fixed &Fixed::max(const Fixed &number, const Fixed &secondNumber) {
	
} */

std::ostream &operator<<(std::ostream& os, const Fixed& fp) {
    os << fp.toFloat();
    return os;
}