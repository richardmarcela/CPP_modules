#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    Brain *brain;
    
    public:
        Dog(void);
        Dog(const Dog &copy);
        ~Dog(void);
        std::string getType(void) const;

        Dog &operator=(const Dog &assign);

        void makeSound(void) const;

};

#endif 