#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ScavTrap.hpp"

class FragTrap : public ClapTrap 
{
    public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(const FragTrap& copy);
        ~FragTrap(void);

        FragTrap &operator=(const FragTrap& assign);

        void highFivesGuys(void);
};

#endif // !FRAGTRAP_HPP