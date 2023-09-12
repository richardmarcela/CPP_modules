#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap Junior("Junior");

	cout << endl;

    DiamondTrap Leonice("Leonice");

	cout << endl;

	Junior.whoAmI();

	cout << endl;

	Leonice.whoAmI();

	cout << endl;

	Junior.attack("Leonice");
	Leonice.takeDamage(10);

	cout << endl;

	Leonice.beRepaired(5);

	cout << endl;

}