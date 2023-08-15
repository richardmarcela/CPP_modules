#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <cmath>

using std::cout;
using std::endl;

class Fixed
{
	int number;
	static const int bits = 8;

	public:
		// Constructors
		Fixed(void);
		//Copy constructor 
		Fixed(const Fixed &copy);
		Fixed(const int value);
		Fixed(const float value);
		
		// Destructor
		~Fixed(void);
		
		// Operators
		Fixed &operator=(const Fixed &assign);
		Fixed &operator>(const Fixed &assign);
		Fixed &operator<(const Fixed &assign);
		Fixed &operator>=(const Fixed &assign);
		Fixed &operator<=(const Fixed &assign);
		Fixed &operator==(const Fixed &assign);
		Fixed &operator!=(const Fixed &assign);
		Fixed &operator+(const Fixed &assign);
		Fixed &operator-(const Fixed &assign);
		Fixed &operator*(const Fixed &assign);
		Fixed &operator/(const Fixed &assign);
		
		// Getters / Setters
		int getRawBits(void) const;
		void setRawBits(int const bits);

		//Methods
		float toFloat(void) const;
		int toInt(void) const;

		static Fixed &min(Fixed &number, Fixed &secondNumber); 
		static Fixed &min(const Fixed &number, const Fixed &secondNumber);
		static Fixed &max(Fixed &number, Fixed &secondNumber);
		static Fixed &max(const Fixed &number, const Fixed &secondNumber);
};

std::ostream &operator<<(std::ostream& os, const Fixed& fp);

#endif