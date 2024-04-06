                                    /*  Print the given pattern(BINARY TRIANGLE)
                                        1
                                        0 1
                                        1 0 1
                                        0 1 0 1
                                    */

#include <iostream>
using namespace std;
int main() {
    int n,number=1;
    
    cout<<" Enter the Number: ";
    cin>>n;
    
    for(int i=1; i<=n; i++){        //Row
       for(int j=1; j<=i; j++){     //Colum
           if((i+j)%2==0){
           cout<<"1";
           }
           else{
           cout<<"0";
           }
           cout<<" ";
       }
      cout<<endl;
    }
    
    return 0;
}