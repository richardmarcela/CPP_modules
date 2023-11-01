# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) 
{
    this->name = "nameless";
    ClapTrap::name = name + "_clap_name";
    this->hitPoints = 100;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;

	cout << "\e[0;33mDefault Constructor called of DiamondTrap\e[0m" << endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
    this->name = name;
    ClapTrap::name = name + "_clap_name";
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;

	cout << "\e[0;33mFields Constructor called of DiamondTrap\e[0m" << endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
    *this = copy;
    cout << "\e[0;33mCopy Constructor called of DiamondTrap\e[0m" << endl;
}

DiamondTrap::~DiamondTrap(void) {
    cout << "\e[0;31mDestructor called of DiamondTrap\e[0m" << endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &assign)
{
    this->name = assign.name;
    this->ClapTrap::name = assign.ClapTrap::name;
	this->hitPoints = assign.hitPoints;
	this->energyPoints = assign.energyPoints;
	this->attackDamage = assign.attackDamage;
	return *this;
}

void DiamondTrap::whoAmI(void) {

    cout << "name: " << this->name << endl;
    cout << "hit: " << this->hitPoints << endl;
    cout << "energy: " << this->energyPoints << endl;
    cout << "attack: " << this->attackDamage << endl;

    cout << "I'm DiamondTrap named: " << this->name << ", ClapTrap named: " << ClapTrap::name << endl;
}
