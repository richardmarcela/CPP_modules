#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public:
        WrongCat(void);
        WrongCat(const WrongCat &copy);
        ~WrongCat(void);
        std::string getType(void) const;

        WrongCat &operator=(const WrongCat &assign);

        void makeSound(void) const;
};

#endif // !WRONGCAT_HPP