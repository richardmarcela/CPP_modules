#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Roberto("Roberto");
	ClapTrap Juninho("Juninho");

	cout << endl;
	
	Roberto.attack("Juninho");
	Juninho.takeDamage(5);

	cout <<  endl;

	Juninho.beRepaired(5);

	cout << endl;

	Juninho.attack("Roberto");
	Roberto.takeDamage(10);

	cout << endl;
}