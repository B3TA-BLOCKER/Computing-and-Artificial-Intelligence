#include <iostream>
#include <iomanip>
#include <limits>
#include<string.h>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    

    int x;
    double y;
    string z;

    cin>>x;
    cin>>y;
    cin.ignore();// important for elemenating the garbage generated with getlie()  ;
    getline(cin,z);

    cout<<(i+x)<<endl;

    cout<<fixed <<setprecision(1)<<(d+y) <<endl;

    string m = s+z;
    cout<<m;

    return 0;
}