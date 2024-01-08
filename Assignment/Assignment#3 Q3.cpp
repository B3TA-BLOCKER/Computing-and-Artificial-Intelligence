#include <iostream>
using namespace std;
int main()
{
    int x,y,temp;
    x=4;
    y=6;

    temp=x;
    x=y;
    y=temp;

    cout<<x<<endl;
    cout<<y;

    return 0;
}