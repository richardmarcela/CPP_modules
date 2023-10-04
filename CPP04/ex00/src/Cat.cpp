#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
    this->type = "Cat";
    cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << endl;
}

Cat::Cat(const Cat &copy) 
{
    *this = copy;
    cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << endl;
}

Cat::~Cat(void)
{
    cout << "\e[0;31mDestructor called of Cat\e[0m" << endl;
}

void Cat::makeSound(void) const
{
    cout << "miau" << endl;
}