#include "../includes/HumanB.hpp"
#include "../includes/Weapon.hpp"
#include <iostream>

HumanB::HumanB(std::string name) {
    this->name = name;
}

HumanB::~HumanB() {
    return;
}

void HumanB::attack(void) {
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

void HumanB::setWeapon(Weapon weapon) {
    this->weapon = weapon;
}