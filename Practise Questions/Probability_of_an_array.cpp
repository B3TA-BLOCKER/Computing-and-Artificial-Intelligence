// Finding the probability in an array ;
#include<iostream>
using namespace std;
int main(){
    int size ;
    cout<<"Enter the size of the array ";
    cin>>size;

    int arr[size];

    long double p_of_pos;
    float c_of_pos = 0;
    long double p_of_neg;
    float c_of_neg = 0 ;
    long double p_of_zero;
    float c_of_zero = 0 ;

    int x = sizeof(arr)/sizeof(int);
    cout<<endl<<x<<endl;

    cout<<"Enter the value of the array "<<endl;
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }

    for(int i=0;i<x;i++){
        if( arr[i]==0){
            c_of_zero ++;
        }
        else if ( arr[i] > 0){
            c_of_pos ++;
        }
        else if (arr[i] < 0){
            c_of_neg ++;
        }
    }
    cout<< c_of_pos<<endl<<c_of_neg<<endl<< c_of_zero<<endl<<endl;


    p_of_pos = (c_of_pos / x);
    p_of_neg = (c_of_neg /x) ;
    p_of_zero = (c_of_zero / x);


    cout<<p_of_pos<<endl<<p_of_neg<<endl<<p_of_zero;

    return 0;
}