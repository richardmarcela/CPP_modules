#include "Zombie.hpp"

int main(void) {
    Zombie *zombies = zombieHorde(10, "Junior");

    for (int i = 0; i < 10; i++)
        zombies[i].announce(i);
    delete [] zombies;
}
