# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name) {
    this->name = name;
    ClapTrap::name = name + "_clap_name";
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;

	cout << "\e[0;33mDefault Constructor called of DiamondTrap\e[0m" << endl;
}

DiamondTrap::~DiamondTrap(void) {
    cout << "\e[0;31mDestructor called of DiamondTrap\e[0m" << endl;
}

void DiamondTrap::whoAmI(void) {
    cout << "I'm DiamondTrap named: " << this->name << ", ClapTrap named: " << ClapTrap::name << endl;
}
