#include "../includes/Weapon.hpp"

Weapon::Weapon(std::string weapon) {
    this->type = weapon;
}

Weapon::Weapon() {
    return;
}

Weapon::~Weapon() {
    return;
}

void Weapon::setType(const std::string &weapon) {
    this->type = weapon;
}

std::string Weapon::getType() {
    return type;
}