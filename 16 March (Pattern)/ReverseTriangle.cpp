#include <iostream>
using namespace std;
int main() {
    int n,number=1;
    
    cout<<" Enter the Number: ";
    cin>>n;
    
    for(int i=n; i>=1; i--){        //Row
       for(int j=1; j<=i; j++){     //Colum
           cout<<j<<" ";
       }
      cout<<endl;
    }
    
    return 0;
}