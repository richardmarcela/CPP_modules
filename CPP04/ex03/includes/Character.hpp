#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include <iostream>

class Character : public ICharacter {
    protected:
        std::string name;
    public: 
        Character(std::string name);
        Character(const Character &copy);
        ~Character(void);

        Character &operator=(const Character &assign);
};

#endif // !CHARACTER_HPP