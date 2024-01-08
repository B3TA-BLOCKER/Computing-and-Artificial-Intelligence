#include <iostream>
using namespace std;
int main()
{
    int l,lb,ub;
    cout<<"Enter the length of the array : ";
    cin>>l;
    cout<<"Enter the lower bound of the array : ";
    cin>>lb;
    cout<<"Enter the upper bound of the array : ";
    cin>>ub;

    int a[l],m;

    for(int i=0;i<=l;i++)
    {
        cin>>m;
        if(m>=lb && m<=ub)
        {
            a[i]=m;
            cout<<endl;
            cout<<"Spaces left = "<<l-i-1;
        }
        else 
        {
            i--;
            cout<<"Space left "<<l-i-2;
        }
        
    }

    return 0;
}