#include <iostream>
using namespace std;
int main()
{
    int x=5,y=7;

    x=x+y;
    y=x-y;
    x=x-y;

    cout<<x<<endl<<y;

    return 0;
}