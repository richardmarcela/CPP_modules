#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
    this->type = "Dog";
    cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << endl;
}

Dog::Dog(const Dog &copy) 
{
    *this = copy;
    cout << "\e[0;33mCopy Constructor called of Dog\e[0m" << endl;
}

Dog::~Dog(void)
{
    cout << "\e[0;31mDestructor called of Dog\e[0m" << endl;
}

void Dog::makeSound(void) const
{
    cout << "au au au" << endl;
}