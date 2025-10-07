#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
    private:
        std::string type;
    public:
        Weapon(std::string type);
        Weapon();
        ~Weapon();
        void setType(std::string type);
        std::string getType(void);
};

#endif