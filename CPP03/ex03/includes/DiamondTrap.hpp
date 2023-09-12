#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    std::string name;

    public:
        DiamondTrap(std::string name_clap_name);
        ~DiamondTrap(void);
        using ScavTrap::attack;
        void whoAmI(void);
};

#endif // !DIAMONDTRAP_HPP