#include "Zombie.hpp"

Zombie::Zombie(string name): _name(name) {}

string Zombie::getName(void) {
    return _name;
}

void Zombie::announce(void) {
    cout << endl << _name << ": BraiiiiiiinnnzzzZ..." << endl;
}