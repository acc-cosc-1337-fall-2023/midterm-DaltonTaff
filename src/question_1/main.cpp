#include <iostream>
#include "question1.h"

int main() 
{
    int num1, num2, gcd;
    char choice;

    do {
        std::cout << "Enter a number between 1-200: ";
        std::cin >> num1;
        std::cout << "Enter a second number 1-200: ";
        std::cin >> num2;

        if (num1 < 1 || num1 > 200 || num2 < 1 || num2 > 200) {
            std::cout << "Please enter a number between 1-200.\n";
            continue;
        }

        gcd = find_gcd(num1, num2);
        std::cout << "The GCD of " << num1 << " and " << num2 << " is " << gcd << std::endl;

        std::cout << "Press q to quit or any other key to continue: ";
        std::cin >> choice;
    } while (choice != 'q');

    return 0;
}