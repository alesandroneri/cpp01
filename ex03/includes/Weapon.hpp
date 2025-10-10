#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
    private:
        std::string type;
    public:
        Weapon(std::string weapon);
        Weapon();
        ~Weapon();
        void setType(const std::string &weapon);
        std::string getType();
};

#endif