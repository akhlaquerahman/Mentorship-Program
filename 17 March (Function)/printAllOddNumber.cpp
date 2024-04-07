        //Q2: Given two numbers a and b, write a function to print all odd numbers between them.

#include<iostream>
using namespace std;
void printOddNumber(int a,int b){
    cout << "Odd numbers between " << a << " and " << b << " are:" << endl;
    for(int i=1; i<=10; i++){
        if(i%2!=0){
            cout<<i<<" ";
        }
        
    }
}
main(){
    int a=1,b=10;
    printOddNumber(a,b);

}
                     /* Output
                       Odd numbers between 1 and 10 are:
                       1 3 5 7 9 
                     */