#include<iostream>
using namespace std;
int main(){
    int arr[4] = {73,67,38,33};

    for(int i=0;i<4;i++){
        if(arr[i]>=38){
            if( (arr[i] + 1 )%5 == 0 ){
                arr[i] = arr[i] +1;
            }
            else if((arr[i] + 2 )%5 == 0){
                arr[i] = arr[i] +2;
            }
        }
    }

    for(int j=0;j<4;j++){
        cout<<arr[j];
        cout<<endl;
    }

    return 0;
}