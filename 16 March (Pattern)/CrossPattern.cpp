#include <iostream>
using namespace std;
int main() {
    int n,mid;
    
    cout<<" Enter the Number: ";
    cin>>n;
    
    for(int i=1; i<=n; i++){        //Row
       for(int j=1; j<=n; j++){     //Colum
           if(i==j || (i+j)==(n+1)){
           cout<<"*";
           }   
           cout<<" ";
       }
      cout<<endl;
    }
    
    return 0;
}