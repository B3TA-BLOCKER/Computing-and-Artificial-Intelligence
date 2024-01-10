#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the value of "<<i+1<<" index : ";
        cin>>arr[i];
    }

    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i=0;i<n ;i++)
    {
        cout<<arr[i];
        cout<<" ";
    }
    cout<<endl;
    
    if(n%2 == 0){
         float mid = (n+1)/2 ;
        int mid2 = mid -1 ;

        float median ;
        int z = arr[int(mid)]  + arr[mid2];

        median = float(z) /2 ;

    
    // cout<<endl<<endl;


        int lowerarr[int(mid)];
        int upperarr[int(mid)];

        for(int i=0;i<mid;i++)
        {
            lowerarr[i]=arr[i];
        }

        int m=0;
        for(int k=mid;k<12;k++)
        {
            upperarr[m] = arr[k];
            m++;
        }

        for(int i=0;i<mid;i++){
            cout<<lowerarr[i]<<" ";
        }
        cout<<endl;
        for(int j=0;j<mid;j++){
            cout<<upperarr[j]<<" ";
        }

        cout<<endl;
        
        int sample = ((mid +1)/2) - 1 ;
        cout<<lowerarr[sample]<<endl;
        cout<<median;
        cout<<endl<<upperarr[sample];

    }
    else{

        float sz = (float(n)/2) -0.5;
        int x = int(sz);
        int lowerarr[x];
        int upperarr[x];

        for(int i=0;i<x;i++)
        {
            lowerarr[i] =  arr[i];
        }
        int m=0;
        for(int j= x+1 ;j<n;j++)
        {
            upperarr[m] = arr[j];
            m++;    
        }

        int mid_of_sub_array = (sizeof(lowerarr)/sizeof(int))/2;

        int index2=mid_of_sub_array;
        int index1 = index2 -1;

        int mid = (sizeof(arr)/sizeof(int))/2;
        cout<<endl<<endl<<endl;

   
    
        float callower = (lowerarr[index1] + lowerarr[index2]) /2;
        cout<<callower<<endl;

        cout<<arr[mid]<<endl;

        float calupper = (upperarr[index1] + upperarr[index2]) /2;
        cout<<calupper;
    }


    
    return 0;
}