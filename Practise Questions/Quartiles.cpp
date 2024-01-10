#include<iostream>
using namespace std;
int main(){
    int size; // size of the array;
    cout<<"Enter the size of the array ";
    cin>>size;

    int arr[size];
    //getting the vcalues in the array ;
    for(int i=0;i<size ;i++){
        cout<<"Enter the value of index "<<i<<"  : ";
        cin>>arr[i];
    }

    // now sorting the array ;
    int temp;
    for(int j=0;j<size-1;j++){
        for(int m=0;m<size-1;m++){
            if(arr[m]>arr[m+1]){
                temp=arr[m+1];
                arr[m+1] = arr[m];
                arr[m]= temp;
            }
        }
    }

    // now we will check if the array is having an even or odd size ;
    if(size%2 ==  0){
        float mid =  (size +1 )/  2 ;
        int lower_index = int ((mid -0.5))-1;
        int upper_index = int ((mid +0.5))+1;
        
        // median of the whole array;
        float Q2;
        float Q1;
        float Q3;

        Q2 = (float(arr[lower_index]) + float(arr[upper_index]))/2;
        
        // median of the lower part of the array ;
        




    }





    return 0;
}