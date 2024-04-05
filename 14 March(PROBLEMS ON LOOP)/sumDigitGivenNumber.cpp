                                //WAP to print the sum of all the even digits of a given number.
                                //  Sample Input : 4556
                                //  Output: 10

#include<iostream>
using namespace std;
main(){
    int n,sum=0;            //n=54
    cout<<"Enter the number of Digit: ";
    cin>>n;

    while(n>0){
        sum=sum+n%10;               //sum=0+(54%10=4),sum=4 reminder
                                    //next time, sum=4+(5%10=5), sum=9 reminder
        n=n/10;                     //n=54/10.n=5.4,n=5
    }
    cout<<"Sum of Digit: "<<sum;       //sum=9
}
                        /*  Output
                            Enter the number of Digit: 4556
                            Sum of Digit: 20
                        */