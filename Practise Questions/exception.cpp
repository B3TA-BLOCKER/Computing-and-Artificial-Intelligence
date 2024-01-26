#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int choice;
    cout<<"Enter the Number you want: ";
    cin>>choice;
    try
    {
        if(choice == 0)
            throw 10;
        for(int i = 1; i <=10 ;i++)
        {
            cout<<choice<<"x"<<i<<"="<<choice*i<<endl;
        }
    }
    catch(int i)
    {
        cout<<"Error."<<endl;
        return 0;
    }
    
}