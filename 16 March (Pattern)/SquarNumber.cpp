                                    /*  Print the following pattern
                                        1 1 1 1
                                        2 2 2 2
                                        3 3 3 3
                                        4 4 4 4
                                    */

#include <iostream>
using namespace std;
int main() {
    int n,number=1;
    
    cout<<" Enter the Number: ";
    cin>>n;
    
    for(int i=1; i<=n; i++){        //Row
       for(int j=1; j<=n; j++){     //Colum
           cout<<number<<" ";
       }
       number=number+1;
      cout<<endl;
    }
    
    return 0;
}