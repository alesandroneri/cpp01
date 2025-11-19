#include "../includes/Zombie.hpp"
#include <iostream>

Zombie::Zombie() {
}

Zombie::~Zombie() {
}

void Zombie::setName(const std::string &name) {
    this->_name = name;
}

void Zombie::announce(void) {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
