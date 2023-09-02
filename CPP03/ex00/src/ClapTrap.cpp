#include "ClapTrap.hpp"

// Constructors
ClapTrap::ClapTrap(std::string name)
{
	name = "";
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 10;
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
	cout << "ClapTrap " << this->name << " attacks " << target << ", " << "causing " << this->attackDamage << " points of damage!" << endl;
	this->energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= this->hitPoints || this->hitPoints == 0)
	{
		cout << "ClapTrap " << this->name << " died!" << endl;
		this->hitPoints = 0;
		return ;
	}
	this->hitPoints -= amount;
	cout << "ClapTrap " << this->name << " takes " << amount <<  " of damage" << endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints == 0)
	{
		cout << "ClapTrap " << this->name <<  " is out of energy!" << endl;
		return ;
	}
	this->energyPoints += amount;
	this->hitPoints--;
	cout << "ClapTrap " << this->name << " repaired itself and gained " << amount << " hit points!" << endl;
}
