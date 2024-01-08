#include<iostream>
using namespace std;
int main()
{
    string a[]={ " Wipe "," Ass "," you "," Fuck ",};
    string *ptr=a;   
    
    
    for(int i=0;i<=3;i++)
    {
        (ptr++);
    }
    
    for(int j=1;j<=4;j++)
    {
        cout<<*(ptr-j);
    }
    return 0;
}
