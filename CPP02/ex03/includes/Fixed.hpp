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
		
		bool operator>(const Fixed &assign);
		bool operator<(const Fixed &assign);
		bool operator>=(const Fixed &assign);
		bool operator<=(const Fixed &assign);
		bool operator==(const Fixed &assign);
		bool operator!=(const Fixed &assign);

		Fixed operator+(const Fixed &assign);
		Fixed operator-(const Fixed &assign);
		Fixed operator*(const Fixed &assign);
		Fixed operator/(const Fixed &assign);

		Fixed &operator++(void);
		Fixed operator++(int);
		Fixed &operator--(void);
		Fixed operator--(int);

		// Getters / Setters
		int getRawBits(void) const;
		void setRawBits(int const bits);

		//Methods
		float toFloat(void) const;
		int toInt(void) const;

		static Fixed &min(Fixed &a, Fixed &b); 
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream& os, Fixed const &fp);

#endif