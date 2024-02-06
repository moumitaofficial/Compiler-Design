#include <iostream>
#include <string>
#include <sstream>
#include <cctype>

bool isNumericConstant(const std::string& input) {
    std::istringstream iss(input);
    double value;
    char remaining;
    if (!(iss >> value) || iss.get(remaining)) {
        return false;
    }
    return true;
}

int main() {
    std::string input;
    std::cout << "Enter input: ";
    std::getline(std::cin, input);

    if (isNumericConstant(input)) {
        std::cout << "Numeric constant\n";
    } else {
        std::cout << "Not numeric\n";
    }

    return 0;
}
