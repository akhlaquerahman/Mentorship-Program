#include<iostream>
using namespace std;
main(){
    float radius,area,circumference;
    float pi=3.14;
    cout<<"Enter the Radius: = ";
    cin>>radius;

    area=pi*radius*radius;
    circumference=2*pi*radius;

    if(area>circumference){
        cout<<"The area is larger than circumference";
    }
    else if(area<circumference){
        cout<<"The circumference is larger than area";
    }
    else{
        cout<<"The area and circumference is both equal";
    }

}