                        //Display this AP - 100,97,94,..upto all terms which are positive. N 

#include<iostream>
using namespace std;
main(){
   int a=100,n;                         //a=start,   n=term(4,5,6 etc.)
   cout<<"Enter The Term of AP: ";
   cin>>n;
    for(int i=1; i<=n; i++){            //special term follow this condition
        a-=3;                           //a=>100-3=97,94,91 etc
        if(a>0){
            cout<<a<<endl;
        }
    }
}
