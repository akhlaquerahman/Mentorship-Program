                //Find the minimum value out of all elements in the array.

#include<iostream>
using namespace std;
int  main(){
    int a[5]={15,14,20,24,18};
    int min=a[0];

    for(int i=0; i<5; i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    cout<<"The Minimum Value Of Array: "<<min;
}
                                /*  Output
                                    The Minimum Value Of Array: 14
                                */