#include <iostream>
#include <string>
#include "../includes/Harl.hpp"

int main(int ac, char **av) {
    std::string str;
    Harl myHarl;
    while(std::getline(std::cin, str)) {
        if (str == "EXIT")
            break;
        myHarl.complain(str);
    }
    return 0;
}