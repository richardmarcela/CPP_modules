#include "Zombie.hpp"

Zombie::~Zombie () {
    cout << "Zombie destructed" << endl;
}

std::string Zombie::getName(void) {
    return this->name;
}

void Zombie::announce(int i) {
    cout << "index " << i + 1 << " -> " << this->name << ": BraiiiiiiinnnzzzZ..." << endl;
}

void Zombie::setName(std::string name) {
    this->name = name;
}