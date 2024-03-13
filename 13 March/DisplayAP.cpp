                //Display this AP - 1,3,5,7,9.. upto ‘n’ terms. 

#include<iostream>
using namespace std;
main(){
    int i,n,AP;                              // number(where)
    int start=1,difference=2;                //start(1,2,3,4..) , difference(2,3,4..)
    cout<<"Enter the Value of n: = ";
    cin>>n;

    for(i=1; i<=n; i++){
        AP=1+(i-1)*2;           //AP Formula
        cout<<AP;

        if (i < n) {
            cout << ", ";
        }
    }

    cout << endl;
}
