#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Jubileus("Jubileus");
	ClapTrap Robert("Robert");

	cout << endl;

	Jubileus.attack("Robert");
	Robert.takeDamage(5);

	cout << endl;

	Jubileus.attack("Robert");
	Robert.takeDamage(1);

	cout << endl;

	Jubileus.attack("Robert");
	Robert.takeDamage(1);

	cout << endl;

	Robert.beRepaired(7);

	cout << endl;

	Jubileus.attack("Robert");
	Robert.takeDamage(10);

	cout << endl;

}