#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
    std::string name;

    public:
        Ice(void);
        Ice(std::string name);
        Ice(const Ice &copy);
        ~Ice(void);

        Ice &operator=(const Ice &assign);

        AMateria *clone(void) const;
        void use(ICharacter &target);
};

#endif // !ICE_HPP