                                    //Display this GP - 1,2,4,8,16,32,.. upto ‘n’ terms. n 
#include<iostream>
using namespace std;
main(){
   int a=1,n,d;                       //a= start,  n= term
   cout<<"Enter The Term of GP: ";
   cin>>n;
   cout<<"Enter The Number multiply of GP: ";
   cin>>d;

    for(int i=1; i<=n; i++){
        cout<<"Geometric Progression: "<<a<<endl;
        a*=d;                       //a=(1*2=2,2*2=4,4*2=8)
    }
}
                        /*  Output.
                            Enter The Term of GP: 6
                            Enter The Number multiply of GP: 2
                            Geometric Progression: 1
                            Geometric Progression: 2
                            Geometric Progression: 4
                            Geometric Progression: 8
                            Geometric Progression: 16
                            Geometric Progression: 32
                        */