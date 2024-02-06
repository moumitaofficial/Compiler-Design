#include <iostream>
using namespace std;

int main() {
    std::string Input;


    std::cout << "Enter an expression: ";
    std::getline(std::cin, Input);


    std::cout << "Operators in the expression: ";
    for (char ch : Input) {
        if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '=') {
            std::cout << ch << " ";
        }

    }

    std::cout << std::endl;

    return 0;
}


