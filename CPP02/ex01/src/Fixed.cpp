#include "Fixed.hpp"

// Constructors
Fixed::Fixed() {
	cout << "\e[0;33mDefault Constructor called\e[0m" << endl;
	this->number = 0;
}

Fixed::Fixed(const Fixed &copy) {
	cout << "\e[0;33mCopy Constructor called\e[0m" << endl;
	*this = copy;
}

/* Fixed::Fixed(int number) {
	cout << "\e[0;33mFields Constructor called\e[0m" << endl;
	this->number = number;
} */

Fixed::Fixed(const int value) {
	(void)value;
	cout << "\e[0;33mInt Constructor called\e[0m" << endl;
	//this->number = static_cast<double>(value) / (1 << this->bits);
}

Fixed::Fixed(const float value) {
	(void)value;
	cout << "\e[0;33mFloat Constructor called\e[0m" << endl;
}

// Destructor
Fixed::~Fixed() {
	cout << "\e[0;31mDestructor called\e[0m" << endl;
}

// Operators
Fixed &Fixed::operator=(const Fixed &assign) {
	cout << "\e[0;31mCopy assignment operator called\e[0m" << endl;
	this->number = assign.getRawBits();
	return *this;
}

// Getters / Setters
int Fixed::getRawBits(void) const {
	cout << "\e[0;33mgetRawBits member function called\e[0m" << endl;
	return this->number;
}

void Fixed::setRawBits(int const bits) {
	this->number = bits;
}

int Fixed::toInt(void) const {
	return this->number << this->bits;
}

float Fixed::toFloat(void) const {
	return 1;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fp) {
    os << fp.toFloat();
    return os;
}
