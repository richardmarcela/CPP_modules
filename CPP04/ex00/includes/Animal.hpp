#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string.h>

using std::cout;
using std::endl;

class Animal {
    protected:
        std::string type;
    
    public:
        Animal(void);
        Animal(const Animal &copy);
        ~Animal(void);

        Animal &operator=(const Animal &assign);

        virtual void makeSound(void);
};

#endif // !ANIMAL_HPP