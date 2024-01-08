#include<iostream>
using namespace std;
int main()

{
    int a[]={1,2,3,4,5};
    
   int *p=a;

   for(int i=1;i<=5;i++)
   {
    cout<<*(p++);
   }
   cout<<endl;
   cout<<*--p;
   cout<<endl;
   p++;

   for(int j=1;j<=5;j++)
   {
    cout<<*(p-j);
   }

    return 0;
}