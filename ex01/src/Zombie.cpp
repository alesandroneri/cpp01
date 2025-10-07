#include "../includes/Zombie.hpp"
#include <iostream>

Zombie::Zombie() {
    return;
}

Zombie::~Zombie() {
    return;
}

void Zombie::setName(std::string name) {
    this->name = name;
}

void Zombie::announce(void) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
