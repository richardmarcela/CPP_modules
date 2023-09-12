#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ScavTrap.hpp"

//avoidind the diamond problem 
class FragTrap : public virtual ClapTrap 
{
    public:
        FragTrap(std::string name);
        ~FragTrap(void);
        void highFivesGuys(void);
};

#endif // !FRAGTRAP_HPP