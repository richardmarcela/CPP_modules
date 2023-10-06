#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
    cout << "\e[0;33mDefault Constructor called of Cure\e[0m" << endl;
}

Cure::Cure(const Cure &copy)
{
    *this = copy;
    cout << "\e[0;33mCopy Constructor called of Cure\e[0m" << endl;
}

Cure::~Cure(void)
{
    cout << "\e[0;31mDestructor called of Cure\e[0m" << endl;
}

Cure &Cure::operator=(const Cure &assign)
{
    this->name = assign.name;
    return *this;
}

AMateria *Cure::clone(void) const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
    AMateria::use(target);
    cout << "* heals " << target.getName() << "’s wounds *" << endl;
}