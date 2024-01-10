
#include <iostream>

using namespace std;


int main() {
    int test_case;
    int num;
    cout<<"Enter the number of Test cases : ";
    cin>>test_case;
    
    for(int i=0;i<test_case;i++){
        cout<<"Enter The number : ";
        cin>>num;
        int c=0;
        for(int j=2;j<(num-1);j++){
            if(num%j==0){
                c++;
            }
        }
        if(c>0){
            cout<<"Not Prime"<<endl;
        }
        else if(c==0){
            cout<<"Prime"<<endl;
        }
    }  
    return 0;
}
