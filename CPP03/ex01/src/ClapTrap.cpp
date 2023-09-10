#include "ClapTrap.hpp"

// Constructors
ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "\e[0;33mDefault Constructor called of ClapTrap\e[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of ClapTrap\e[0m" << std::endl;
}

// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << "\e[0;31mDestructor called of ClapTrap\e[0m" << std::endl;
}

// Operators
ClapTrap & ClapTrap::operator=(const ClapTrap &assign)
{
	name = assign.name;
	hitPoints = assign.hitPoints;
	energyPoints = assign.energyPoints;
	attackDamage = assign.attackDamage;
	return *this;
}

void ClapTrap::attack(const std::string &target) 
{
	if (this->energyPoints <= 0)
	{
		cout << "ClapTrap " << this->name << " is out of energy!" << endl;
		return ;
	} 
	cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << endl;
	this->energyPoints--;
}

void ClapTrap::takeDamage(unsigned int attackDamage)
{
	if (attackDamage >= this->hitPoints || this->hitPoints == 0)
	{
		cout << "ClapTrap " << this->name << " died!" << endl;
		this->hitPoints = 0;
		return ;
	}
	this->hitPoints -= attackDamage;
	cout << "ClapTrap " << this->name << " takes " << attackDamage <<  " of damage" << endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints == 0)
	{
		cout << "ClapTrap " << this->name <<  " is out of energy!" << endl;
		return ;
	}
	this->hitPoints += amount;
	this->energyPoints--;
	cout << "ClapTrap " << this->name << " repaired itself and gained " << amount << " hit points!" << endl;
}
