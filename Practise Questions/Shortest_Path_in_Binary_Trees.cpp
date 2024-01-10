#include<iostream>
using namespace std;
int main()
{
    int q;
    int i,j;

    cout<<"Enter the number of qurey ";
    cin>>q;

    for(int x=0;x<q;x++)
    {
        cin>>i>>j;
        if(i<j)
        {
            cout<<i<<endl;
        }
        else 
        {
            cout<<j<<endl;
        }
    }

    
    
    return 0;
} // namespac std;
