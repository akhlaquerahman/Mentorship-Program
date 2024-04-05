                        //WAP to print the sum of all the even digits of a given number.
                                //  Sample Input : 4556
                                //  Output: 10

#include<iostream>
using namespace std;
main(){
    int n=46,sum=0;           

    while(n>0){
        if(n%2==0){
        sum=sum+n%10;               //sum=0+(4556%10=6),sum=6 reminder
                                    //next time, sum=6+(455%10=5), sum=5 reminder
        n=n/10;
        }   
                          //n=4556/10
    }
    cout<<"Sum of Even Digit: "<<sum;       //sum=20
}

                                /*  Output
                            Enter the number of Digit: 46
                            Sum of Digit: 10
                        */     