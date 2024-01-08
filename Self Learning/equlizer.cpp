#include<iostream>
using namespace std;
int main()
{
    string a,b;

    cout<<"Enter Your First Sentence : ";
    cin>>a;
    cout<<endl;
    cout<<"Enter Your Second Sentence : ";
    cin>>b;

    if(a==b)
    {
        cout<<"Strings are Equal.";
    }
    else 
    {
        cout<<"Strings are not Equal.";
    }

    return 0;
    
}