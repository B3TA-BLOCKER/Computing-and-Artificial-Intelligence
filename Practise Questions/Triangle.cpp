/*
    Write a C++ code to print out an equilateral Triangle using any of the loops.
    Ask the user for the height of the triangle.
*/

#include <iostream>

using namespace std;

int main() {
    int row = 4;

    for(int i = 1; i <= row; i++) {
        for(int j = 1; j <= row - i; j++) {
            cout << " ";
        }
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
