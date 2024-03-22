#include<iostream>
using namespace std;
float AreaOfCircle(float radius){
    
    float pi=3.14;
    return pi*radius*radius;
}
main(){
    float radius=5.0;
    AreaOfCircle(radius);
    cout << "Area of the circle with radius:\n" <<"Radius: = "<< radius << " \nArea Of Circle: =  " <<AreaOfCircle(radius) << endl;
}



