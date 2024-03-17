                            //WAP to print odd numbers from 1 to 100

#include<iostream>
using namespace std;
main(){
    int a=1;
    // cout<<"enter The Odd Number: ";
    // cin>>a;
    for(int i=1; i<=100; i++){
        if(a%2!=0){
            
        cout<<"It Is Odd Number: "<<a<<endl;
        }
        a=a+1;
    }
}