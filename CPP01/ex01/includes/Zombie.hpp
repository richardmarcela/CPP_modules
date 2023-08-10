#pragma once

#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;

class Zombie {
    std::string name;

    public:
        std::string getName();
        void setName(std::string name);
        void announce(int i);
        ~Zombie();
};

Zombie* zombieHorde(int N, std::string name);