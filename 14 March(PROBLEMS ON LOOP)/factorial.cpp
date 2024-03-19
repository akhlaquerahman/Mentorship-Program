#include<iostream>
using namespace std;
main(){
    int n,fact=1;
    cout<<"Enter the number whose factorial is to be Find: ";
    cin>>n;

    for(int i=1; i<=n; i++){
                                //fact=1,
        fact=fact*i;                //fact=>i*1=1,fact=>1*1=1,fact=>2*1=2,fact=>3*2=6,fact=>4*6=24,fact=>5*24=120,
    }
    cout<<"Factorial: = "<<fact;
}