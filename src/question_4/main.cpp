#include "question4.h"
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string input;
    while (true) 
    {
        cout << "Enter your characters or enter q to quit: ";
        cin >> input;
        if (input == "q") {
            break;
        }
        bool result = is_palindrome(input);
        cout << boolalpha << result << endl;
    }
    return 0;
}