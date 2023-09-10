# include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;

    std::cout << "\e[0;33mDefault Constructor called of ScavTrap\e[0m" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "\e[0;31mDestructor called of ScavTrap\e[0m" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (this->energyPoints <= 0)
    {
        cout << "ScavTrap " << this->name << " is out of energy!" << endl;
        return ;
    }
    cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << endl;
    this->energyPoints--; 
}

void ScavTrap::guardGate() {
    cout << "ScavTrap " << this->name << " is now in Gate keeper mode!" << endl;
}