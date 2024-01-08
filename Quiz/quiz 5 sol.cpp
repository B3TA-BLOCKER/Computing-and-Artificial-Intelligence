#include <iostream>
using namespace std;
int car(int a,int b,int c);
int main()
{
    int a,b,c;

    cout<<"Enter the numbe of wheels ";
    cin>>a;
    cout<<"Enter the number of frames ";
    cin>>b;
    cout<<"Enter the number of figures ";
    cin>>c;

    cout<<car(a,b,c);



    return 0;
}
int car (int a,int b,int c)
{
    if(a>=4 && b>=1 && c>=2)
    {
        int x,y,z,small=0;

        x=a/4;
        y=b;
        z=c/2;

        if(x<y && x<z)
        {
            small=x;
        }
        else if(y<x && y<z)
        {
            small=y;
        }
        else if(z<y && z<x)
        {
            small=z;
        }

        return small;


    }
    else 
    {
        return 0;
    }
}