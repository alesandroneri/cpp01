#include <iostream>
#include <string>

int main (void) {
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;
    
    std::cout << "Adress of str: " << &string << std::endl;
    std::cout << "Adress of stringPTR: " << &stringPTR << std::endl;
    std::cout << "Adress of stringREF: " << &stringREF << std::endl << std::endl;
    std::cout << "Value of str: " << string << std::endl;
    std::cout << "Value of stringPTR: " << stringPTR << std::endl;
    std::cout << "Value of stringREF: " << stringREF << std::endl;

    return 0;
}