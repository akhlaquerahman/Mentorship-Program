                    //Find the maximum value out of all the elements in the array.

#include<iostream>
using namespace std;
main(){
    int a[5]={12,15,18,24,14};
    int max=a[0];

    for(int i=0; i<=5; i++){
        if(a[i]>=max){
            max=a[i];
        }
    }
    cout<<"Your Maximum Value in index: "<<max;
}
                                /*  Output
                                    Your Maximum Value in index: 24
                                */