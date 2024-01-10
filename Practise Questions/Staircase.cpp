#include <iostream>
using namespace std;

int main() {

   int n;
   cout<<"Enter the value of n : ";
   cin>>n;

   int x= (n-1);
   for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
         if(j>=x)
         {
            cout<<"#";
         }
         else {
            cout<<" ";
         }
      }
      cout<<endl;
      x--;
   }

   return 0;
}
