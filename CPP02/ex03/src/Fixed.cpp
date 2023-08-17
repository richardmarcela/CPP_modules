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
Fixed::~Fixed() {}

// Operators
Fixed &Fixed::operator=(const Fixed &assign) {
	this->number = assign.getRawBits();
	return *this;
}

bool Fixed::operator>(const Fixed &assign) const {
	return this->number > assign.getRawBits();
}

bool Fixed::operator<(const Fixed &assign) const {
	return this->number < assign.getRawBits();
}

bool Fixed::operator>=(const Fixed &assign) const {
	return this->number >= assign.getRawBits();
}

bool Fixed::operator<=(const Fixed &assign) const {
	return this->number <= assign.getRawBits();
}

bool Fixed::operator==(const Fixed &assign) const {
	return this->number == assign.getRawBits();
}

bool Fixed::operator!=(const Fixed &assign) const {
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
	return this->number >> Fixed::bits;
}

float Fixed::toFloat(void) const {
	return (float)this->number / (float)(1 << Fixed::bits);
}

Fixed &Fixed::min(Fixed &number, Fixed &secondNumber) {
	if (number.getRawBits() < secondNumber.getRawBits())
		return number;
	return secondNumber;
}

const Fixed &Fixed::min(const Fixed &number, const Fixed &secondNumber) {
	if (number.getRawBits() < secondNumber.getRawBits())
		return number;
	return secondNumber;
}

Fixed &Fixed::max(Fixed &number, Fixed &secondNumber) {
	if (number.getRawBits() > secondNumber.getRawBits())
		return number;
	return secondNumber;
}

const Fixed &Fixed::max(const Fixed &number, const Fixed &secondNumber) {
	if (number.getRawBits() > secondNumber.getRawBits())
		return number;
	return secondNumber;
}

std::ostream &operator<<(std::ostream& os, const Fixed& fp) {
    os << fp.toFloat();
    return os;
}