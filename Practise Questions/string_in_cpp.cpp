#include<iostream>
using namespace std;
int main(){
    string x,y;
    cout<<"Enter the sentence number 1 : ";
    cin>>x;
    cout<<"Enter the sentence number 2 : ";
    cin>>y;

    int m,n ;
    m=size(x);
    n=size(y);

    cout<<m<<n<<endl;
    cout<<x+y;

    cout<<endl;
    char string1[m];
    char string2[n];

    for(int i=0;i<m;i++){
        string1[i] = x[i];
    }

    for(int j=0;j<n;j++){
        string2[j]=y[j];
    }

    char temp=string1[0];
    string1[0]=string2[0];
    string2[0]=temp;

    for(int k=0;k<m;k++){
        cout<<string1[k];
    }  

    for(int l=0;l<n;l++){
        cout<<string2[l] ;
    }

    return 0;
}