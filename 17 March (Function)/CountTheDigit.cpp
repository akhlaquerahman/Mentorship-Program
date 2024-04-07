//Q3: Write a function to count the number of digits in a number and then print the square of this number

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
    cout<<"Number Of Squar: "<<digit*digit<<endl;
}  
main(){
    int a=12345;
    CountTheNumber(a);

}
                            /*  Output
                                Number Of Digit: 5
                                Number Of Square: 25
                            */
