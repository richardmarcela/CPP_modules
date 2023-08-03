#include "Zombie.hpp"

Zombie::Zombie() {};

Zombie::Zombie(string name): _name(name) {}

Zombie::~Zombie () {
    cout << "Zombie destructed" << endl;
}

string Zombie::getName(void) {
    return _name;
}

void Zombie::announce(int i) {
    cout << "index " << i + 1 << " -> " << _name << ": BraiiiiiiinnnzzzZ..." << endl;
}

void Zombie::setName(string name) {
    this->_name = name;
}