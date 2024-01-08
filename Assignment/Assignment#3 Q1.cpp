#include<iostream>
using namespace std;
int main()
{
    float y=0.0278,f=0.0833,v;
    int c;

    cout<<"Enter the value in inches : ";
    cin>>v;

    cout<<"To convert your value in YARDS please select '1' "<<endl<<"To convert your value in FOOTS please select '2' "<<endl;
    cout<<endl;
    cout<<"Enter your choice : ";
    cin>>c;

    switch(c)
    {
        case 1:
        cout<<"Your value is "<<v*y;
        break;
        case 2:
        cout<<"Your value is "<<v*f;
        break;
        default:
        cout<<"Invalid choice";
    }
    return 0;

}