//Given the radius of the circle predict whether numerically area of this circle is larger than the circumference or not

#include<iostream>
using namespace std;
int main(){
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


                                         //Output
                                /*
                                Enter the Radius: = 5
                                The area is larger than circumference

                                Enter the Radius: = 2
                                The area and circumference is both equal

                                Enter the Radius: = 1
                                The circumference is larger than area

                                */