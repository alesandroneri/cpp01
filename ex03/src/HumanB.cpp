#include "../includes/HumanB.hpp"
#include "../includes/Weapon.hpp"
#include <iostream>

HumanB::HumanB(const std::string &name) {
    _name = name;
    _weapon = NULL;
}

HumanB::~HumanB() {
}

void HumanB::attack() {
    if (_weapon != NULL)
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
    else
        std::cout << _name << " has no weapon and is attacking the zombie with bare hands." << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
    _weapon = &weapon;
}