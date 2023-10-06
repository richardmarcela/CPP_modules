#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include <iostream>

class Character : public ICharacter {
    protected:
        int equipped;
        std::string name;
        AMateria *materias[4];

    public: 
        Character(void);
        Character(std::string name);
        Character(const Character &copy);
        ~Character(void);
        std::string const &getName(void) const;

        Character &operator=(const Character &assign);
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
};

#endif // !CHARACTER_HPP