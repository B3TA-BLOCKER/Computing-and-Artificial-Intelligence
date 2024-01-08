#include<iostream>
using namespace std;
int main()
{
   int  salary[]={1000,2000,3000}, total=0,sum,m, x;

    for(int j=0;j<sizeof(salary)/sizeof(int);j++)
    {
        total += salary[j];
    }
    
    m=sizeof(salary)/sizeof(int) ;

    
      
    double min,max;

   
   max=salary[0];
   min=salary[0];

    for(int i=0;i<sizeof(salary)/sizeof(int);i++)
    {

        if(salary[i]>=max)
        {
            max=salary[i];
        }
        if(salary[i]<=min)
        {
            min=salary[i];
        }
    }
    

    sum= min + max;
    

    double ans;

     x=total - sum;
     

     

     ans=x/(m-2) ;

     cout<<ans;
     

    return 0;
}