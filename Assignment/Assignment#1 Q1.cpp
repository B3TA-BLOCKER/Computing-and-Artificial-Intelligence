#include<iostream>
using namespace std;
int main()
{
    int a1,a2,a3,total;
    cout<<"Enter the value of the First angle : ";
    cin>>a1;
    cout<<"Enter the value of the Second angle : ";
    cin>>a2;
    cout<<"Enter the value of the Third angle : ";
    cin>>a3;

    total=a1+a2+a3;

    if(total==180)
    {
        cout<<"Valid";
    }
    else 
    {
        cout<<"Invalid";
    }
    return 0;


}
