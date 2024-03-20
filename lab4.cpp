#include <iostream>
#include <string>
#include<fstream>
using namespace std;

bool isInputValidIdentifier(string &input) {
    if (!((input[0] >= 'a' && input[0] <= 'z') || (input[0] >= 'A' && input[0] <= 'Z') || input[0] == '_'))
        return false;
    for (int i = 1; i < input.length(); ++i) {
        if (!((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z') ||
              (input[i] >= '0' && input[i] <= '9') || input[i] == '_'))
            return false;
    }
    return true;
}

void outputCheck(const string& filename) {

    ifstream file(filename);


    if (!file.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        return;
    }

    string word;
    while (file >> word) {
        if (isInputValidIdentifier(word)) {
            cout << "The input '" << word << "' is a valid identifier." << endl;
        } else {
            cout << "The input '" << word << "' is not a valid identifier." << endl;
        }
    }

    file.close();
}

int main() {

   string filename;

    cout << " Enter file Name: ";
    getline(cin,filename);


    outputCheck(filename);

    return 0;
}
