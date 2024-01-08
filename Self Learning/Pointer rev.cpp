#include<iostream>
using namespace std;
int main()
{
    char x[100],*ptr,*rev;
    int c=0;

    cout<<"Enter a character string : ";
    cin>>x;

    ptr=x;

    for(;*ptr!='\0';*ptr++)
    {
        c++;
    }

    for(*ptr=c;*ptr>=0;*ptr--)
    {
        cout<<*ptr;
    }

    return 0;
}