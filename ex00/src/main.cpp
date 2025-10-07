#include "../includes/Zombie.hpp"

int main(void) {
    Zombie *zombie = newZombie("Foo");
    randomChump("random");
    zombie->~Zombie();
    delete zombie;
    return 0;
}