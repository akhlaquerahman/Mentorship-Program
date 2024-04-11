                        //Take positive integer input and tell if it is a three digit number or not.
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a Number: ";
    cin>>a;
    if(a>=100 && a<=999){
        cout<<"It is three digit number: ";
    }
    else{
        cout<<"It is not three digit number: ";
    }

}        
                            /*Output
                            Enter a Number: 12
                            It is not three digit number:

                            Enter a Number: 123
                            It is three digit number:  
                            */                