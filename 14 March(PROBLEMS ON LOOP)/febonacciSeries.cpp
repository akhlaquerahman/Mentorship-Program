#include<iostream>
using namespace std;
main(){
    int Term,febonaci;
    int a=1;
    int b=0;
    
    cout<<"Enter the Term of Febonacci: ";
    cin>>Term;
    
    cout<<"Febonaci Series: ";
    cout<<b<<" ";

    for(int i=1; i<=Term; i++){
        febonaci=a+b;
        cout<<febonaci<<" ";
        a=b;
        b=febonaci;
    }
}   