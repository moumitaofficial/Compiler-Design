#include <iostream>
using namespace std;

bool isValidIdentifier(string& input)
{
    if (!((input[0] >= 'a' && input[0] <= 'z') || (input[0] >= 'A' && input[0] <= 'Z') || input[0] == '_'))

            return false;


    for (int i = 1; i < input.length(); ++i)

    {
        if (!((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= '0' && input[i] <= '9') || input[i] == '_'))

            return false;
    }

            return true;
}

int main()

{
    string input;
    cout << "Enter an identifier: ";
    cin >> input;

    if (isValidIdentifier(input))

     {
        cout << "1";
        cout << "\nBecause first character is a alphabet characters or underscore and the second character is also alpha-numeric characters or underscore";
     }

    else

     {
        cout << "0";
        cout << "\nBecause the first character is not a alphabet characters or underscore ";
     }

    return 0;
}
