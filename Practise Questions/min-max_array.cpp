
#include<iostream>

int main(){

    int arr[5]={140537896 ,243908675 ,670291834, 923018467 ,520718469};

    int sum[5];

    for(int i=0;i<5;i++){
        sum[i]=0;
    }

    for(int j=0;j<5;j++){
        for(int k=0;k<5;k++){
            if(k==j){
                k++;
            }
            sum[j] = sum[j] + arr[k];
        }
    }

    int min = sum[0];
    int max = sum [0];

    for(int i=0;i<5;i++){
        if(sum[i]>max){
            max = sum [i];
        }
        if(sum[i]<min){
            min = sum[i];
        }
    }

    std::cout<<min<<" "<<max;


}