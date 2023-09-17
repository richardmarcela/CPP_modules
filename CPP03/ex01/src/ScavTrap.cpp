# include "ScavTrap.hpp"

// Overrinding constructor, destructor and attack method
ScavTrap::ScavTrap(void) 
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;

    cout << "\e[0;33mDefault Constructor called of ScavTrap\e[0m" << endl; 
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) 
{
	this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;

    cout << "\e[0;33mFields Constructor called of ScavTrap\e[0m" << endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) 
{
    *this = copy;
    cout << "\e[0;33mCopy Constructor called of ClapTrap\e[0m" << endl; 
}

ScavTrap::~ScavTrap(void) 
{
	cout << "\e[0;31mDestructor called of ScavTrap\e[0m" << endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &assign)
{
    this->name = assign.name;
	this->hitPoints = assign.hitPoints;
	this->energyPoints = assign.energyPoints;
	this->attackDamage = assign.attackDamage;
	return *this;
}

void ScavTrap::attack(const std::string& target) 
{
    if (this->energyPoints <= 0)
    {
        cout << "ScavTrap " << this->name << " is out of energy!" << endl;
        return ;
    }
    cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << endl;
    this->energyPoints--; 
}

//ScavTrap exclusive method
void ScavTrap::guardGate(void) 
{
    cout << "ScavTrap " << this->name << " is now in Gate keeper mode!" << endl;
}