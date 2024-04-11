                                //Take positive integer input and tell if it is even or odd.

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter an Integer: = ";
    cin>>a;
    if(a%2==0){
        cout<<"It is Even";
    }
    else{
        cout<<"It is Odd";
    }
}
                                    /* Output
                                    Enter an Integer: = 5
                                    It is Odd.

                                    Enter an Integer: = 4
                                    It is Even
                                    */