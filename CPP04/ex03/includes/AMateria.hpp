#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include "Ice.hpp"
#include <iostream>

using std::cout;
using std::endl;

class AMateria
{
    protected:
        std::string type;

    public:
        AMateria(void);
        AMateria(std::string const &type);
        ~AMateria(void);

        AMateria &operator=(const AMateria &assign);

        std::string const & getType(void) const; //Returns the materia type
        virtual AMateria *clone(void) const = 0;
        virtual void use(ICharacter &target);
};

#endif // !AMATERIA_HPP