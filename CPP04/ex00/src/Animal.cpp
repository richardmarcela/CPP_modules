#include "Animal.hpp"

Animal::Animal(void)
{
    this->type = "nameless";
    cout << "\e[0;33mDefault Constructor called of Animal\e[0m" << endl;
}

Animal::Animal(const Animal &copy)
{
    *this = copy;
    cout << "\e[0;33mCopy Constructor called of Animal\e[0m" << endl;
}

Animal::~Animal(void)
{
    cout << "\e[0;31mDestructor called of Animal\e[0m" << endl;
}

void Animal::makeSound(void)
{
    cout << "Nameless makes an unrecognized sound!" << endl;
}