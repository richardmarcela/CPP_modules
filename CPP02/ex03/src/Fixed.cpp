#include "Fixed.hpp"

// Constructors
Fixed::Fixed(void) {
	this->number = 0;
}

Fixed::Fixed(const int value) {
	this->number = value << Fixed::bits;
}

Fixed::Fixed(const float value) {
	this->number = roundf(value * (1 << Fixed::bits));
}

Fixed::Fixed(const Fixed &copy) {
	*this = copy;
}

// Destructor
Fixed::~Fixed(void) {}

// Operators
Fixed &Fixed::operator=(const Fixed &assign) {
	this->setRawBits(assign.getRawBits());
	return *this;
}

bool Fixed::operator>(const Fixed &assign) {
	return this->number > assign.getRawBits();
}

bool Fixed::operator<(const Fixed &assign) {
	return this->number < assign.getRawBits();
}

bool Fixed::operator>=(const Fixed &assign) {
	return this->number >= assign.getRawBits();
}

bool Fixed::operator<=(const Fixed &assign) {
	return this->number <= assign.getRawBits();
}

bool Fixed::operator==(const Fixed &assign) {
	return this->number == assign.getRawBits();
}

bool Fixed::operator!=(const Fixed &assign) {
	return this->number != assign.getRawBits();
}

Fixed Fixed::operator+(const Fixed &assign) {
	return Fixed(this->toFloat() + assign.toFloat());
}

Fixed Fixed::operator-(const Fixed &assign) {
	return Fixed(this->toFloat() - assign.toFloat());
}

Fixed Fixed::operator*(const Fixed &assign) {
	return Fixed(this->toFloat() * assign.toFloat());
}

Fixed Fixed::operator/(const Fixed &assign) {
	return Fixed(this->toFloat() / assign.toFloat());
}

//pre increment
Fixed &Fixed::operator++(void) {
	this->number += 1;
	return (*this);
}

//post increment
Fixed Fixed::operator++(int) {
	Fixed temp(this->number * toFloat());
	this->number += 1;
	return (temp); 
}	 

//pre decrement
Fixed &Fixed::operator--(void) {
	this->number -= 1;
	return (*this);
}

//post decrement
Fixed Fixed::operator--(int) {
	Fixed temp(this->number * toFloat());
	this->number -= 1;
	return (temp);
}

// Getters / Setters
int Fixed::getRawBits(void) const {
	return this->number;
}

void Fixed::setRawBits(int const bits) {
	this->number = bits;
}

int Fixed::toInt(void) const {
	return this->number >> this->bits;
}

float Fixed::toFloat(void) const {
	return (float)this->number / (float)(1 << this->bits);
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
	return a.getRawBits() < b.getRawBits() ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
	return a.getRawBits() < b.getRawBits() ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
	return a.getRawBits() > b.getRawBits() ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
	return a.getRawBits() > b.getRawBits() ? a : b;
}

std::ostream &operator<<(std::ostream &os, Fixed const &fp) {
    return os << fp.toFloat();
}