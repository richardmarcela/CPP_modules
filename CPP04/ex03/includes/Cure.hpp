#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
    std::string name;

    public:
        Cure(void);
        Cure(std::string name);
        Cure(const Cure &copy);
        ~Cure(void);

        Cure &operator=(const Cure &assign);

        AMateria *clone(void) const;
        void use(ICharacter &target);
};

#endif // !CURE_HPP
