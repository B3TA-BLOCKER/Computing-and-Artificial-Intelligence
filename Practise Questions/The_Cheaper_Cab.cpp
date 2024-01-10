#include<iostream>
using namespace std;
int main(){
    int test_case,a,b;
    cout<<"Enter the number of test case ";
    cin>>test_case;

    for(int i=0;i<test_case ;i++){
        cin>>a;
        cin>>b;

        if(a<b){
            cout<<"First"<<endl;
        }
        else if(a>b){
            cout<<"Second"<<endl;
        }
        if(a==b){
            cout<<"Any"<<endl;
        }
    } 
    
    return 0;
}