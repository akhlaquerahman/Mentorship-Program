             //Print the table of n

#include<iostream>
using namespace std;
main(){
    int i,n,table;
    cout<<"Enter the Value Of n: ";
    cin>>n;

    for(i=1; i<=10; i++){
        table=n*i;
            cout<<n<<" "<<"x"<<" "<<i<<" = "<<table<<endl;
        }
        
}