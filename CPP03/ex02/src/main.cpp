#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    FragTrap Junior("Junior");
    FragTrap Leonice("Leonice");

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

	Junior.highFivesGuys();

	cout << endl;
}