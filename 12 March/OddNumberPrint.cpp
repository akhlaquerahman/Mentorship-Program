            //Print all the odd numbers from 1 to 100.

#include<iostream>
using namespace std;
main(){
    int i;
    for(i=1; i<=100; i++){
        if(i%2!=0){
            cout<<i;
        }
        cout<<endl;
    }
}