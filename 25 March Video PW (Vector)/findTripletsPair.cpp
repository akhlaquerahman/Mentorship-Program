/*count the number of triplets whose
sum is equal to the given value of x*/


#include<iostream>
using namespace std;
int main(){
    int i,j,k,n,x;
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
           for(k=j+1; k<n; k++){
            if((a[i]+a[j]+a[k])==x){
                count++;
            }
           } 
        }
    }
            cout<<"pair number:"<<count;

}