#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
    this->type = "Cat";
    this->brain = new Brain();
    cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << endl;
}

Cat::Cat(const Cat &copy) 
{
    *this = copy;
    cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << endl;
}

Cat::~Cat(void)
{
    delete this->brain;
    cout << "\e[0;31mDestructor called of Cat\e[0m" << endl;
}

std::string Cat::getType(void) const
{
    return this->type;
}

Cat &Cat::operator=(const Cat &assign)
{
    this->type = assign.getType();
    return *this;
}

void Cat::makeSound(void) const
{
    cout << "miau" << endl;
}