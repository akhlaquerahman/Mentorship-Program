/*Find the doublet in the Array whose sum is 
equal to the given value x (LEETCODE TWO SUM)*/



#include<iostream>
using namespace std;
int main(){
    int i,j,n,x;
    int a[100];

    cout<<"enter the value of n:";
    cin>>n;
    cout<<"enter the array element:";
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"enter the value of x:";
    cin>>x;
    int count= 0;

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(a[i]+a[j]==x){
                count++;
            }
        }
    }
            cout<<"pair number:"<<count;

}