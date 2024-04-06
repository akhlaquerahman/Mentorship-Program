                                    /*  PRINT THE STAR CROSS PATTERN
                                        *   *
                                         * *
                                          *
                                         * *
                                        *   *
                                    */

#include <iostream>
using namespace std;
int main() {
    int n;
    
    cout<<" Enter the Odd Number: ";
    cin>>n;
    
    for(int i=0; i<n; i++){        //Row
       for(int j=0; j<n; j++){     //Colum
           if( i==j || i+j==n-1 ){
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
