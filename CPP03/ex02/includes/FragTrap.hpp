#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ScavTrap.hpp"

class FragTrap : public ClapTrap 
{
    public:
        FragTrap(std::string name);
        ~FragTrap(void);
        void highFivesGuys(void);
};

#endif // !FRAGTRAP_HPP