#pragma once
#include <iostream> // cout, endl

using std::cout;
using std::string;
using std::endl;


class Zombie {
    string _name;

    public:
        string getName();
        void announce(void);
        Zombie(string name);
};

Zombie *newZombie(string name);
void randomChump(string name);