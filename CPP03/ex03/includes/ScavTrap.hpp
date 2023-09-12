#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap 
{
    public:
        ScavTrap(std::string name);
        ~ScavTrap(void);
        void attack(const std::string& target);
        void guardGate(void);
};

#endif // !SCAVTRAP_HPP