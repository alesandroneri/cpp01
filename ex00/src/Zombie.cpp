#include "../includes/Zombie.hpp"
#include <iostream>

Zombie::Zombie(const std::string &name) {
    _name = name;
}

Zombie::~Zombie() {
    std::cout << _name << " is being killed by the destructor." << std::endl;
}

void Zombie::announce(void) {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
