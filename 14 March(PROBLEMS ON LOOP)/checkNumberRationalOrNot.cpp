                       // WAP to check if a number is Rational or not (use of break statement)
#include<iostream>
using namespace std;
main(){
    int p,q;
    int RationalNumber;

    cout<<"Enter The Number Of P: ";
    cin>>p;

    cout<<"Enter The Number Of Q: ";
    cin>>q;

    RationalNumber=p/q;

    if(q!=0){
        cout<<"It is Prime Numbers: ";
    }
    else{
        cout<<"It is Not Prime Number: ";
    }
}              
                        /*  Output
                        Enter The Number Of P: 4
                        Enter The Number Of Q: 2
                        It is Prime Numbers:

                        Enter The Number Of P: 4
                        Enter The Number Of Q: 0
                        It is Not Prime Number:
                        */