/*
    You are to create an ATM machine, that takes an initial amount of money E.g 100.
    Then based on the user’s choice, add, or subtract from that value.
    Create functions for addition and subtraction. Add or subtract in fixed 50 amount.

*/
#include <iostream>

using namespace std;

int main()
{
    int initialAmount; // Initial amount of money
    char choice;

    cout << "Enter your Balance : ";
    cin >> initialAmount;

    cout << endl
         << "Welcome to the ATM Machine!" << endl;
    cout << "Initial balance: " << initialAmount << endl;

retry :
        cout << "Menu:" << endl;
        cout << "1. Add Money" << endl;
        cout << "2. Subtract Money" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case '1':
            initialAmount += 50;
            cout << "Added 50 units. Current balance: " << initialAmount << endl;
            break;
        case '2':
            if (initialAmount >= 50)
            {
                initialAmount -= 50;
                cout << "Subtracted 50 units. Current balance: " << initialAmount << endl;
            }
            else
            {
                cout << "Not enough balance to subtract 50 units." << endl;
            }
            break;
        case '3':
            cout << "Exiting the ATM. Thank you for using our service!" << endl;
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
            goto retry;
        }
    

    return 0;
}
