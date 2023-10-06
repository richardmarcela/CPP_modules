#include "AMateria.hpp"

AMateria::AMateria(void) 
{
    this->type = "";
    cout << "\e[0;33mDefault Constructor called of AMateria\e[0m" << endl;
}

AMateria::AMateria(std::string const &type) : type(type)
{
    cout << "\e[0;33mCopy Constructor called of AMateria\e[0m" << endl;
}

AMateria::~AMateria(void)
{
    cout << "\e[0;31mDestructor called of AMateria\e[0m" << endl;
}

AMateria &AMateria::operator=(const AMateria &assign)
{
    this->type = assign.getType();
    return *this;
}

std::string const &AMateria::getType(void) const 
{
    return this->type;
}

void AMateria::use(ICharacter &target)
{
    (void)target;
}