#include "ClapTrap.hpp"

// Constructors
ClapTrap::ClapTrap()
{
	_name = "";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 10;
	std::cout << "\e[0;33mDefault Constructor called of ClapTrap\e[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	_name = copy.getName();
	_hitPoints = copy.getHitPoints();
	_energyPoints = copy.getEnergyPoints();
	_attackDamage = copy.getAttackDamage();
	std::cout << "\e[0;33mCopy Constructor called of ClapTrap\e[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage)
{
	_name = name;
	_hitPoints = hitPoints;
	_energyPoints = energyPoints;
	_attackDamage = attackDamage;
	std::cout << "\e[0;33mFields Constructor called of ClapTrap\e[0m" << std::endl;
}


// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << "\e[0;31mDestructor called of ClapTrap\e[0m" << std::endl;
}


// Operators
ClapTrap & ClapTrap::operator=(const ClapTrap &assign)
{
	_name = assign.getName();
	_hitPoints = assign.getHitPoints();
	_energyPoints = assign.getEnergyPoints();
	_attackDamage = assign.getAttackDamage();
	return *this;
}


// Getters / Setters
std::string ClapTrap::getName() const
{
	return _name;
}
void ClapTrap::setName(std::string name)
{
	_name = name;
}

int ClapTrap::getHitPoints() const
{
	return _hitPoints;
}
void ClapTrap::setHitPoints(int hitPoints)
{
	_hitPoints = hitPoints;
}

int ClapTrap::getEnergyPoints() const
{
	return _energyPoints;
}
void ClapTrap::setEnergyPoints(int energyPoints)
{
	_energyPoints = energyPoints;
}

int ClapTrap::getAttackDamage() const
{
	return _attackDamage;
}
void ClapTrap::setAttackDamage(int attackDamage)
{
	_attackDamage = attackDamage;
}

