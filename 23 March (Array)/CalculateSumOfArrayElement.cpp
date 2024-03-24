#include<iostream>
using namespace std;
main(){
    int a[5]={12,14,16,20,30};
    int sum=0;

    for(int i=0; i<5; i++){
        sum=sum+a[i];
    }
    cout<<"The Sum Of Element in Array: "<<sum;
}