#include <iostream>
using namespace std;
int main(){
    int rows=8;


    for(int i = 1; i <= rows; ++i)
    {
        for(int j = rows; j >= 1; --j)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}
