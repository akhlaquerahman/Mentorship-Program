                                       // Display this GP - 3,12,48,.. upto ‘n’ terms.
#include<iostream>
using namespace std;
main(){
   int a=3,n;                       //a= start,  n= term
   cout<<"Enter The Term of GP: ";
   cin>>n;
    for(int i=1; i<=n; i++){
        cout<<"Geometric Progression: "<<a<<endl;
        a*=4;                       //a=(3,3*4=12,12*4=48,)
    }
}                                       