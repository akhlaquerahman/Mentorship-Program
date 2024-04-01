#include<iostream>
using namespace std;
 main(){
    int a[5]={6,8,5,4,9};
    int product=1;

    for(int i=0; i<5; i++){
        product=product*a[i];
    }
    cout<<"The Product Of This Element: "<<product;
}