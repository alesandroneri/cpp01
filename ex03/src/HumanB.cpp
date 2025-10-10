#include "../includes/HumanB.hpp"
#include "../includes/Weapon.hpp"
#include <iostream>

HumanB::HumanB(std::string name) {
    this->name = name;
    this->has_weapon = false;
}

HumanB::~HumanB() {
    return;
}

void HumanB::attack() {
    if (has_weapon)
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << this->name << " has no weapon and is attacking the zombie with bare hands." << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
    if (!has_weapon) {
        this->weapon = &weapon;
        this->has_weapon = true;
    }
    else {
        this->weapon = &weapon;
    }
}