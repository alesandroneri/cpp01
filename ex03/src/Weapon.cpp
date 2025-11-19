#include "../includes/Weapon.hpp"

Weapon::Weapon(const std::string &weapon) {
    _type = weapon;
}

Weapon::Weapon() {
    return;
}

Weapon::~Weapon() {
    return;
}

void Weapon::setType(const std::string &weapon) {
    _type = weapon;
}

const std::string &Weapon::getType() const {
    return _type;
}