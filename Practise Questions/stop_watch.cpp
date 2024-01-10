//stop watch

#include<iostream>
#include <unistd.h>

using namespace std;
int main(){
    system("CLS");

  
    for(int h=0;h<60;h++){
        for(int min=0;min<60;min++){
            for(int sec=0;sec<60;sec++){
                cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
                cout<<"\t\t\t\t\t\t\t "<<h<<" : "<<min<<" : "<<sec;
                sleep(1);
                system("CLS");
            }
        }
    }
    
    return 0;
}