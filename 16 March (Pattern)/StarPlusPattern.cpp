#include <iostream>
using namespace std;
int main() {
    int n,mid;
    
    cout<<" Enter the Number: ";
    cin>>n;
    mid=(n/2)+1;
    
    for(int i=1; i<=n; i++){        //Row
       for(int j=1; j<=n; j++){     //Colum
           if(i==mid || j==mid){
           cout<<"*";
           }   
           else{
           cout<<" ";
           }
       }
      cout<<endl;
    }
    
    return 0;
}