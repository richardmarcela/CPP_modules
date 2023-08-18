#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int _attackDamage;

	public:
		// Constructors
		ClapTrap();
		ClapTrap(const ClapTrap &copy);
		ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage);
		
		// Destructor
		~ClapTrap();
		
		// Operators
		ClapTrap & operator=(const ClapTrap &assign);
		
		// Getters / Setters
		std::string getName() const;
		void setName(std::string name);
		int getHitPoints() const;
		void setHitPoints(int hitPoints);
		int getEnergyPoints() const;
		void setEnergyPoints(int energyPoints);
		int getAttackDamage() const;
		void setAttackDamage(int attackDamage);
		
};

#endif