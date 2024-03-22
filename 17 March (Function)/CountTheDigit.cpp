#include<iostream>
using namespace std;
void CountTheNumber(int number){
    int digit=0;
    int temp=number;
    while(temp%10!=0){
        temp=temp/10;
        digit++;
    }
    cout<<"Number Of Digit: "<<digit<<endl;
    cout<<"Number Of Squar: "<<number*number<<endl;
}  
main(){
    int a=12345;
    CountTheNumber(a);

}

