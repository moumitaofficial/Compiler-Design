#include <iostream>
using namespace std;

bool isSingleLineComment(const std::string& line) {

    return (line.find("//") == 0);
}

bool isMultiLineComment(const std::string& line) {

    return (line.find("/*") == 0 && line.find("*/") != std::string::npos);
}

int main() {
    std::string userInput;


    std::cout << "Enter a line of code: ";
    std::getline(std::cin, userInput);


    if (isSingleLineComment(userInput)) {
        std::cout << "Single-line comment" << std::endl;
    } else if (isMultiLineComment(userInput)) {
        std::cout << "Multi-line comment" << std::endl;
    } else {
        std::cout << "Not a comment" << std::endl;
    }

    return 0;
}
