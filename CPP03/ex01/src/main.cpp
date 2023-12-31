#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap Junior("Junior");
    ScavTrap Leonice("Leonice");

    cout << endl;

	Junior.attack("Robert");
	Leonice.takeDamage(5);

	cout << endl;

	Junior.attack("Leonice");
	Leonice.takeDamage(1);

	cout << endl;

	Junior.attack("Leonice");
	Leonice.takeDamage(1);

	cout << endl;

	Leonice.beRepaired(7);

	cout << endl;

	Junior.attack("Leonice");
	Leonice.takeDamage(100);

	cout << endl;

	Junior.guardGate();

	cout << endl;
}