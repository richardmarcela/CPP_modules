#pragma once

#include <iostream>
#include <cstdlib>

using std::cout;
using std::string;
using std::endl;

class Zombie {
    string _name;

    public:
        string getName();
        void setName(string name);
        void announce(int i);
        Zombie(string name);
        Zombie();
        ~Zombie();
};

Zombie* zombieHorde(int N, string name);