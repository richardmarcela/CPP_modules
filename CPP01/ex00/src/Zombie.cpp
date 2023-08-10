#include "Zombie.hpp"

Zombie::Zombie(std::string name): name(name) {}

std::string Zombie::getName(void) {
    return this->name;
}

void Zombie::announce(void) {
    cout << endl << this->name << ": BraiiiiiiinnnzzzZ..." << endl;
}