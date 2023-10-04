#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
    this->type = "WrongCat";
    cout << "\e[0;33mDefault Constructor called of WrongCat\e[0m" << endl;
}

WrongCat::WrongCat(const WrongCat &copy) 
{
    *this = copy;
    cout << "\e[0;33mCopy Constructor called of WrongCat\e[0m" << endl;
}

WrongCat::~WrongCat(void)
{
    cout << "\e[0;31mDestructor called of WrongCat\e[0m" << endl;
}

std::string WrongCat::getType(void) const
{
    return this->type;
}

WrongCat &WrongCat::operator=(const WrongCat &assign)
{
    this->type = assign.getType();
    return *this;
}

void WrongCat::makeSound(void) const
{
    cout << "Wrong cat says miau" << endl;
}