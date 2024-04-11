                              //Take 3 positive integers input and print the greatest of them.

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the three Number: ";
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<"Greatest number is: "<<a;
    }
    else if(b>c && b>a){
        cout<<"Greatest number is: "<<b;
    }
    else if(c>a && c>b){
        cout<<"Greatest number is: "<<c;
    }
    
}
                            /*Output
                            Enter the three Number: 6
                            3
                            4
                            Greatest number is: 6
                            */