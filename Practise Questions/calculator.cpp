/*
    "Write a C++ program that implements a basic calculator. 
    The program should continuously display a menu with the following options:

    Addition (+)
    Subtraction (-)
    Division (/)
    Multiplication (*)
    Exit the calculator (press 'e')

    The program should prompt the user to enter an option. 
    If the user selects an operation (1 to 4), 
    the program should then prompt the user to enter two numbers and perform the selected operation. 
    If the user selects 'e', the program should exit. 
    If the user enters an invalid option, the program should display an error message.
*/

#include <iostream>

using namespace std;

int main() {
    char choice;
    double num1, num2, result;

    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Addition (+)" << endl;
        cout << "2. Subtraction (-)" << endl;
        cout << "3. Division (/)" << endl;
        cout << "4. Multiplication (*)" << endl;
        cout << "5. Exit the calculator (press 'e')" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 'e') {
            cout << "Exiting the calculator. Goodbye!" << endl;
            break;
        }

        if (choice >= '1' && choice <= '4') {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;

            switch(choice) {
                case '1':
                    result = num1 + num2;
                    cout << "Result: " << result << endl;
                    break;
                case '2':
                    result = num1 - num2;
                    cout << "Result: " << result << endl;
                    break;
                case '3':
                    if (num2 != 0) {
                        result = num1 / num2;
                        cout << "Result: " << result << endl;
                    } else {
                        cout << "Error: Division by zero is not allowed!" << endl;
                    }
                    break;
                case '4':
                    result = num1 * num2;
                    cout << "Result: " << result << endl;
                    break;
                default:
                    cout << "Error: Invalid option! Please try again." << endl;
            }
        } else {
            cout << "Error: Invalid option! Please try again." << endl;
        }
    }

    return 0;
}
