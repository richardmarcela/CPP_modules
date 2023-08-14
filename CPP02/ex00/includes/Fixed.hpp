#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cstdlib>

using std::cout;
using std::endl;

class Fixed
{
	int number;
	static const int bits = 8;

	public:
		// Constructors
		Fixed(void);
		Fixed(const Fixed &copy);
		Fixed(int number);
		
		// Destructor
		~Fixed(void);
		
		// Operators
		Fixed & operator=(const Fixed &assign);
		
		// Getters / Setters
		int getNumber(void) const;
		void setNumber(int number);
		int getRawBits(void) const;
		void setRawBits(int const bits);
};

#endif