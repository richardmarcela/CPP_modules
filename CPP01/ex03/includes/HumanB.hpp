#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"
#include <iostream>

using std::cout;
using std::endl;

class HumanB {
    std::string name;
    Weapon *weapon; //can be created without a weapon

    public:
        HumanB(std::string name);
        void setWeapon(Weapon &weapon);
        void attack(void);
};

#endif