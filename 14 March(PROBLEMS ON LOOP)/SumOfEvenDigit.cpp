#include<iostream>
using namespace std;
main(){
    int n=4556,sum=0;           

    while(n>0){
        sum=sum+n%10;               //sum=0+(4556%10=6),sum=6 reminder
                                    //next time, sum=6+(455%10=5), sum=5 reminder
        n=n/10;                     //n=4556/10
    }
    cout<<"Sum of Digit: "<<sum;       //sum=20
}