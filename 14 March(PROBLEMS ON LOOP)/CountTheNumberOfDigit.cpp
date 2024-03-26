#include<iostream>
using namespace std;
main(){
    int Number,count=0;

    cout<<"Enter The Digit You want to count: ";
    cin>>Number;

    while(  Number!=0){
        Number= Number/10;
        count++;
    }
    cout<<"It is Number of Your Digit: "<<count;
}