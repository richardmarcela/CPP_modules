#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name) {}

std::string Zombie::getName(void) {
    return _name;
}

void Zombie::announce(void) {
    cout << endl << _name << ": BraiiiiiiinnnzzzZ..." << endl;
}