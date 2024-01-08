#include <iostream>
using namespace std;
int main ()
{
    int eng,ph,ch,mt,hsc,cs,total;
    float avg,per;

    cout<<"Enter your Marks of English : ";
    cin>>eng;
    cout<<"Enter your Marks of Physics : ";
    cin>>ph;
    cout<<"Enter your Marks of Chemistry : ";
    cin>>ch;
    cout<<"Enter your Marks of Maths : ";
    cin>>mt;
    cout<<"Enter your Marks of Health and Safty : ";
    cin>>hsc;
    cout<<"Enter your Marks of Computing And AI : ";
    cin>>cs;

    total=mt+eng+ph+ch+hsc+cs ;
    avg= total/6 ;
    per=avg ;

    switch(per>=80)
    {
        case 1:
        cout<<"Your overall percentage = "<<per<<"%"<<".And your Grade is A .";
        break ;
        case 0:
        switch(per>=70 && per<=79)
        {
            case 1 :
            cout<<"Your overall percentage = "<<per<<"%.And your Grade is B .";
            break ;
            case 0:
            switch (per>=60 && per<=69)
            {
                case 1:
                cout<<"Your overall percentage = "<<per<<"%.And your Grade is C .";
                break ;
                case 0:
                switch (per>=50 && per<=59)
                {
                    case 1 :
                    cout<<"Your overall percentage = "<<per<<"%.And your Grade is D .";
                    break ;
                    default :
                    cout<<"Sorry You Failed";
                }
            }
        }
    }

    return 0;

}