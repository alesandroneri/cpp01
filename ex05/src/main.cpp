#include <iostream>
#include <string>
#include "../includes/Harl.hpp"

int main(void) {
    std::string str;
    Harl myHarl;
    while(1) {
        std::cout << "Insert a complaint (DEBUG/INFO/WARNING/ERROR) or EXIT to finish the program." << std::endl;
        if (!std::getline(std::cin, str))
            break;
        if (str == "EXIT")
            break;
        myHarl.complain(str);
    }
    return 0;
}