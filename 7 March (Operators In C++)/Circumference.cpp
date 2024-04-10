                   // 8. Write a program to find the circumference of a circle with radius 10 in C++.

#include<iostream>
 using namespace std;
 int main(){
    float r,pi=3.14,circumference;
    cout<<"Enter the Radius: = ";
    cin>>r;
    circumference=2*pi*r;
    cout<<"The Circumference: = "<<circumference;
    return 0;
 }

                                    /*  Output.
                                    Enter the Radius: = 10 
                                    The Circumference: = 62.8
                                    */