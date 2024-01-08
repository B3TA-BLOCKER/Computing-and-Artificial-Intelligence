#include <iostream>
using namespace std;
int main()
{    
    int x,k;
    cout<<"Enter the size of your array "<<endl;
    cin >>x;

    int a[x];

    cout <<"Enter your array : "<<endl;

    for (int i=0; i<x; i++)
    {
        cin>>a[i];
    }

    cout <<"Your array is "<<'{';
    for(int j=0;j<x;j++)
    {
        cout<<a[j];
    }
    cout<<'}';
    cout<<endl;

    cout <<"Enter your key : ";
    cin>>k;

    int c=0,f=0;

    while(c<x || f==0)
    {
        if (k==a[c])
        {
            cout<<"Key is found at index "<<c;
            f=f+1;
        }
        c=c+1;
    }
    if (f==0)
    {
        cout<<"Key not found ";
    }

    return 0;


}