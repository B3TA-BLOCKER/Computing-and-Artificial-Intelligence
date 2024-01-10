#include<iostream>
using namespace std;
int main(){
    int n=10;
   

    int arr[n]={5,7,6,13,19,2,9,4,1,3};
    

    int i, j;
    for (i = 0; i < n-1; i++) {
        // Last i elements are already sorted
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i];
        cout<<" ";
    }


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
        lowerarr[i] =  arr[i];
    }
    int m=0;
    for(int j= mid ;j<n;j++)
    {
        upperarr[m] = arr[j];
        m++;    
    }
cout<<endl;

    for(int u=0;u<mid;u++)
    {
        cout<<lowerarr[u];
        cout<<" ";
    }
    cout<<endl;
    for(int y=0;y<mid;y++){
        cout<<upperarr[y];
        cout<<" ";
    }

    int sample = ((mid +1)/2) - 1 ;
    cout<<endl;
    cout<<"The median of the lower array is : "<<lowerarr[sample]<<endl;
    cout<<endl<<"The median of the whole array is : "<<median;
    cout<<endl<<"The median of the upper array is : "<<upperarr[sample];

    return 0;
}

   