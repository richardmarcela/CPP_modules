#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
    std::string type;

    std::string getType();
    void setType(std::string new_type);
};

#endif