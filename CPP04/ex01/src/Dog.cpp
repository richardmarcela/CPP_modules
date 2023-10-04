#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
    this->type = "Dog";
    this->brain = new Brain();
    cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << endl;
}

Dog::Dog(const Dog &copy) 
{
    *this = copy;
    cout << "\e[0;33mCopy Constructor called of Dog\e[0m" << endl;
}

Dog::~Dog(void)
{
    delete this->brain;
    cout << "\e[0;31mDestructor called of Dog\e[0m" << endl;
}

std::string Dog::getType(void) const
{
    return this->type;
}

Dog &Dog::operator=(const Dog &assign)
{
    this->type = assign.getType();
    return *this;
}

void Dog::makeSound(void) const
{
    cout << "au au au" << endl;
}