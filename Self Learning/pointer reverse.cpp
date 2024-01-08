#include<iostream>
using namespace std;
int main()
{
    char x[]="hassaan";
    string rev;                 

    int arr[10];

    cout<<sizeof(arr)/sizeof(int)<<endl; 

    for(int i=0; i<sizeof(x)/sizeof(char)  ;i++)
    {
        rev= *(x+i) + rev;
    }
    cout<<rev;

    return 0;
}