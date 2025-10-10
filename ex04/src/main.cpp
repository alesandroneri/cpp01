#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av) {
    if (ac != 4) {
        std::cerr << "Error: wrong number of input." << std::endl;
        return 0;
    }
    else {
        std::string str;
        std::string target_substr = av[2];
        std::string replacement = av[3];
        std::ofstream new_file("new_file.txt");
        std::fstream file(av[1]);
        std::size_t position;

        while (std::getline(file, str)) {
            position = str.find(target_substr);
            if (position != std::string::npos) {
                str.erase(position, target_substr.length());
                str.insert(position, replacement);
            }
            new_file << str << std::endl;
        }
    }
    return 0;
}