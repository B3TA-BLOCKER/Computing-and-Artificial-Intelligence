#include<iostream>
#include<cmath>
using namespace std;

long long factorial(int n) {
    return tgamma(n + 1);
}

int main(){
    long double e =2.718281828;
    long double ans;
    for(int x=0;x=15;x++){
        ans=(pow(10,x)*pow(e,10)/factorial(x));
    } 

    cout<<"The result of the Sigma is : "<<ans<<endl;
    cout<<"The final answer is : "<<(1-ans);
}