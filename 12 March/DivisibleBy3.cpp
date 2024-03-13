            //Print all numbers from 1 to 100 that are divisible by 3

#include<iostream>
using namespace std;
main(){
    int i;
    for(i=1; i<=100; i++){
        if(i%3==0){
            cout<<i;
        }
        cout<<endl;
    }
}