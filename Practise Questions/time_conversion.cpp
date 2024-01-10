#include<iostream>
using namespace std;
int main(){
    string x= "07:05:45PM";

    char num[2];
    for(int i=0;i<2;i++){
        num[i] = char(x[i]);
        
    }
    for(int j=0;j<2;j++){
        cout<<num[j]<<endl;
    }
    char m[1]={'0'};
    for(int s=0;s<2;s++){
        m[0] =( m[0] * 10 ) + num[s];
        cout<<m[0];
    }
    
    

   


    return 0;
}