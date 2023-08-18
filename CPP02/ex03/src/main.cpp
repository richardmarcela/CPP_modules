#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {
    //inside

	bool result = bsp(Point(0, 0), Point(10, 30), Point(20, 0), Point(10, 15));
	if (result)
		cout << "Point inside of the triangle" << endl;
	else
		cout << "Point outside of the triangle" << endl;

	//outside

	result = bsp(Point(0, 0), Point(10, 30), Point(20, 0), Point(30, 15));
	if (result)
		cout << "Point inside of the triangle" << endl;
	else
		cout << "Point outside of the triangle" << endl;
	return EXIT_SUCCESS;
}