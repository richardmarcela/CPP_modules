#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    std::string name;

    public:
        DiamondTrap(void);
        DiamondTrap(std::string name_clap_name);
        DiamondTrap(const DiamondTrap &copy);
        ~DiamondTrap(void);

        DiamondTrap &operator=(const DiamondTrap &assign);

        using ScavTrap::attack;
        void whoAmI(void);
};

#endif // !DIAMONDTRAP_HPP