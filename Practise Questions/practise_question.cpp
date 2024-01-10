#include<iostream>
using namespace std;
struct complex_no{
    int a,b;
};
int main()
{
    
    complex_no x,y;

    int sum_c,sum_r;


    cout<<"Enter the complex part of the first number ";
    cin>>x.a;
    cout<<"Enter the real part  ";
    cin>>x.b;
    cout<<"Enter the complex part of the second number  ";
    cin>>y.a;
    cout<<"Enter the real part  ";
    cin>>y.b;

    cout<<endl<<endl;
    sum_c= x.a + y.a;
    sum_r = x.b + y.b ;

    cout<<"The sum is "<<sum_c<<"i"<<" + "<<sum_r<<endl;

    return 0;
    

}