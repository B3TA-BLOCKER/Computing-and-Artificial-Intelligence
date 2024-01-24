/*
    Write a C++ program that takes 20 integers as input from the user and then display 
    the frequency of even, odd and zero numbers.
*/

#include <iostream>

using namespace std;

int main() {
    int numbers[20];
    int evenCount = 0, oddCount = 0, zeroCount = 0;

    cout << "Enter 20 integers:" << endl;

    // Taking input from the user
    for (int i = 0; i < 20; ++i) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    // Counting even, odd, and zero numbers
    for (int i = 0; i < 20; ++i) {
        if (numbers[i] == 0) {
            zeroCount++;
        } else if (numbers[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Displaying the frequency of even, odd, and zero numbers
    cout << "Frequency of even numbers: " << evenCount << endl;
    cout << "Frequency of odd numbers: " << oddCount << endl;
    cout << "Frequency of zero numbers: " << zeroCount << endl;

    return 0;
}
