#include<iostream>
using namespace std;
int main(){
    int arr[6] = {1 ,4 ,4, 4, 5 ,3};
    int max_num;
    int x= sizeof(arr)/sizeof(int);
    int max=-1;
    
    
    for(int i=0;i<x;i++){
        int u=0;
        for(int j=0;j<x;j++){
            if(arr[i] == arr[j] ){
                u++;
            }
            if(u>max){
                max=u;
                max_num= arr[j];
            }
        }
    }

    cout<<max<<endl;
    cout<<max_num;

    return 0;
}