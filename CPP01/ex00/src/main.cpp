#include "Zombie.hpp"

int main(void) {
    Zombie *zombie = newZombie("junior");
    zombie->announce();

    randomChump("francisvaldo");
    delete zombie;
}