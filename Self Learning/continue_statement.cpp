#include<iostream>
using namespace std;
int main(){
    for (int i=0; i<5;i++){
        for (int j=0; j<5 ; j++){
            if (i==j){
                continue; // controll goes back to loop
            }else{
                cout << i << " " << j << endl;
            }
        }
    }
}