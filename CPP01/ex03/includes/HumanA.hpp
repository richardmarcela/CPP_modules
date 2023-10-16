#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"
#include <iostream>

using std::cout;
using std::endl;

class HumanA {
    std::string name;
    Weapon &weapon; //need to be provided everytime a humanA is created

    public:
        HumanA(std::string name, Weapon &weapon);
        void attack(void);
};

#endif