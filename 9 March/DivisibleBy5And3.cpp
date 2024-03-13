                            //Take positive integer input and tell if it is divisible by 5 and 3.

#include<iostream>
using namespace std;
main(){
    int a;
    cout<<"Enter a Number: ";
    cin>>a;
    if(a%5==0 && a%3==0){
        cout<<"It is divisible both are 5 and 3 ";
    }
    else{
        cout<<"It is not divisible both are 5 and 3 ";
    }
}