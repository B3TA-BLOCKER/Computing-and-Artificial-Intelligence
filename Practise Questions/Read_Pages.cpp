#include<iostream>
using namespace std;
int main(){
    // n= number of pages 
    //x pages for y days 
    // t= numbe rof test cases 

    int n,x,y,t,pro;

    cin>>t;
    
    for(int i=0;i<t;i++){
        cin>>n>>x>>y;

        pro=x*y;
        if(pro>=n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}