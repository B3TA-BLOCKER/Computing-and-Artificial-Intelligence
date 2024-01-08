#include <iostream>
using namespace std;
int great (int *a,int *b,int *c);
int main()
{
    int a,b,c;

    cout<<"Enter your numbers ";
    cin>>a>>b>>c;

    great(&a,&b,&c);

    return 0;
}
int great(int *a,int *b,int *c)
{
    int gr;

    if(*a>*b && *a>*c)
    {
        gr=*a;
    }
    else if(*b>*a && *b>*c)
    {
        gr=*b;
    }
    else if (*c>*a && *c>*b)
    {
        gr=*c;
    }

    cout<<gr;

    return 0;
}

