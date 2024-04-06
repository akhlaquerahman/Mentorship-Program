                                    /*  PRINT THE FLOYD TRIANGLE PATTERN
                                        1
                                        2 3
                                        4 5 6
                                        7 8 9 10
                                    */

#include <iostream>
using namespace std;
int main() {
    int n,number=1;
    
    cout<<" Enter the Term: ";
    cin>>n;
    
    for(int i=1; i<=n; i++){        //Row
       for(int j=1; j<=i; j++){     //Colum
           
           cout<<number<<" ";
           number++;
       }
      cout<<endl;
    }
    
    return 0;
}