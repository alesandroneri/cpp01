#include "../includes/Zombie.hpp"

int main(void) {
    Zombie *zombie = newZombie("Foo");
    randomChump("random");
    delete zombie;
    return 0;
}