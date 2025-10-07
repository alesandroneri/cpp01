#include "../includes/Weapon.hpp"

Weapon::Weapon(std::string type) {
    this->type = type;
}

Weapon::Weapon() {
    return;
}

Weapon::~Weapon() {
    return;
}

void Weapon::setType(std::string type) {
    this->type = type;
}

std::string Weapon::getType(void) {
    return type;
}