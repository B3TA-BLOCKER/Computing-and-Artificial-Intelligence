#include<iostream>
using namespace std;
int main(){
    int size;
    int arr[size];
    float mean;
    float median ;
    int mode;
    cout<<"Enter the size of the array ";
    cin>>size;
    cout<<"Enter the the values in the array "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    float sum = 0 ;
    for(int i=0;i<size;i++)
    {
        sum += arr[i];
    }
    mean = sum / size ;
    
    int temp;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if (arr[j]> arr[j+1]){
            temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
            }
        }
    }
    
    if(size % 2 == 0){
        float x = (float(size)+ 1)/2 ;
        int index_1 = int((float(x))-0.5) ; 
        int index_2 = int((float(x)) + 0.5) ;
        
        median = ((float(arr[index_1]) + float(arr[index_2]))/ 2);
    }
    else {
        int index = (size +1)/2 ;
        median = arr[index];
    }
    
    //mode;
    int smallest;
     int high_count =0 ;
    int index;


    for(int i=0;i<size;i++){
        int c=1;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                c++;
            }
        }
        if(c>high_count){
            high_count = c;
            index=i;
        }
    }
    cout<<mean<<endl;
    cout<<median<<endl;
   cout<<arr[index+1];
    return 0;
}