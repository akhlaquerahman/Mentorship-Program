                                //Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
#include<iostream>
using namespace std;
main(){
   int a=4,n;
   cout<<"Enter The Term of AP: ";
   cin>>n;
    for(int i=1; i<=n; i++){
        cout<<a<<endl;
        a+=3;
    }
}                
                        /*  Output
                            Enter The Term of AP: 5
                            4
                            7
                            10
                            13
                            16
                        */                