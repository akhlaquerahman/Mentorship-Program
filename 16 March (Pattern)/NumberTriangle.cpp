                                /*  Print the given pattern Number Triangle Flipped
                                     1
                                     1 2
                                     1 2 3
                                     1 2 3 4
                                */

#include <iostream>
using namespace std;
int main() {
    int n,number=1;
    
    cout<<" Enter the Number: ";
    cin>>n;
    
    for(int i=1; i<=n; i++){        //Row
       for(int j=1; j<=i; j++){     //Colum
           cout<<j<<" ";
       }
      cout<<endl;
    }
    
    return 0;
}