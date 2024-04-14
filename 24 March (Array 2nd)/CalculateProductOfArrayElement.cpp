                //Calculate the product of all the elements in the given array.

#include<iostream>
using namespace std;
int main(){
    int a[5]={6,8,5,4,9};
    int product=1;

    for(int i=0; i<5; i++){
        product=product*a[i];
    }
    cout<<"The Product Of This Element: "<<product;
}

                            /*  Output
                                The Product Of This Element: 8640 
                            */