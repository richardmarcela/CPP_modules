# include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;

    cout << "\e[0;33mDefault Constructor called of FragTrap\e[0m" << endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;

    cout << "\e[0;33mFields Constructor called of FragTrap\e[0m" << endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
    *this = copy;
    cout << "\e[0;33mCopy Constructor called of ClapTrap\e[0m" << endl;
}

FragTrap::~FragTrap(void) {
    cout << "\e[0;31mDestructor called of FragTrap\e[0m" << endl;
}

FragTrap &FragTrap::operator=(const FragTrap &assign)
{
    this->name = assign.name;
	this->hitPoints = assign.hitPoints;
	this->energyPoints = assign.energyPoints;
	this->attackDamage = assign.attackDamage;
	return *this;
}

void FragTrap::highFivesGuys(void) {
    if (this->energyPoints <= 0)
    {
        cout << "FragTrap " << this->name << " is out of energy!" << endl;
        return ;
    }
    cout << "FragTrap " << this->name << " says: High Fives!" << endl;
    this->energyPoints--;
}