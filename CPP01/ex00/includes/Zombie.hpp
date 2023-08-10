#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream> // cout, endl

using std::cout;
using std::endl;


class Zombie {
    std::string name;

    public:
        std::string getName();
        void announce(void);
        Zombie(std::string name);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif