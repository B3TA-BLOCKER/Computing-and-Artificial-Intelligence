#include<iostream>
using namespace std;
int myswap(int *a, int *b);
int main()
{
    int a,b;

    cout<<"Enter your numbers"<<endl;
    cin>>a;

    cin>>b;

    myswap(&a,&b);

    return 0;

}
int myswap(int *a,int *b)
{
    int temp;

    temp=*a;
    *a=*b;
    *b=temp;

    cout<<*a <<" "<<*b;

    return 0;

}