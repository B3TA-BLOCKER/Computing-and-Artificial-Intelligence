#include <iostream>
using namespace std;
float getlength (float x)
{
    return x*2;
}
float getwidth(float y)
{
    return y*2;
} 
float getarea(float x, float y)
{
    return x*y;
}
int displaydata(float a,float b,float c)
{
    cout<<"Length is "<<a<<endl;
    cout<<"Width is  "<<b<<endl;
    cout<<"Area is "<<c;

    return 0;
}
int main ()
{
    float x,y,a,b,c,d;

    cout<<"Enter the length : ";
    cin>>x;
    cout<<"Enter width : ";
    cin>>y;
    
    a=getlength(x);
    b=getwidth(y);
    c=getarea(x,y);
    d=displaydata(a,b,c);

    return 0;
}