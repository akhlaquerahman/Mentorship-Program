                                    /*  Print the following pattern
                                        Input : n = 4
                                        Output :
                                        A
                                        A B
                                        A B C
                                        A B C D
                                    */

#include <iostream>
using namespace std;
int main() {
    int n,number=1;
    
    cout<<" Enter the Number: ";
    cin>>n;
    
    for(int i=1; i<=n; i++){        //Row
       for(int j=1; j<=i; j++){     //Colum
           cout<<char(j+64)<<" ";
       }
      cout<<endl;
    }
    
    return 0;
}