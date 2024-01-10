//
// Created by Ali Bukhari on 4/19/2023.
//
#include<iostream>
using namespace std;
int main()
{

    int size;

    cout<<"Enter the size of the array : ";
    cin>>size;

    int ar[size];

    for(int i=0;i<size;i++)
    {
        cout<<"Enter the value for the "<<i+1<<" index : ";
        cin>>ar[i];
    }

    int target ;
    cout<<"Enter the target you want to achieve : ";
    cin>>target;

    int index1;
    int index2;

    int i=0;
    int j=1;
    while (i<size)
    {
        while (j<size)
        {
            if( ar[i] + ar[j] == target )
            {
                index1 = i;
                index2 = j;
                cout<<j;
            }
            j++;
        }
        i++;
    }

    cout<<"["<<index1<<","<<index2<<"]";

    return 0;


}