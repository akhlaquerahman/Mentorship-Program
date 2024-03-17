                //Display this AP - 1,3,5,7,9.. upto ‘n’ terms. 

#include<iostream>
using namespace std;
main(){
   int a=1,n;
   cout<<"Enter The Term of AP: ";
   cin>>n;
    for(int i=1; i<=n; i++){
        cout<<a<<endl;
        a+=3;
    }
}
