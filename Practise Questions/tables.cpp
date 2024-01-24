/*
    Create a program that takes a number as input and outputs its multiplication table up till times 10. 
    Throw an exception when user enters 0.
    E,g
    1.
    1 x 1 = 1
    1 x 2 = 2
          . 
          .
    1 x 10 = 10

*/

#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number to display its multiplication table up to 10: ";
    cin >> number;

    cout << "Multiplication table for " << number << ":" << endl;
    for (int i = 0; i <= 10; ++i) {
        cout << number << " x " << i << " = " << (number * i) << endl;
    }

    return 0;
}
