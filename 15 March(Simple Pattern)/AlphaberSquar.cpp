                                    /*Print the alphaber square pattern

                                                A B C D 
                                                A B C D
                                                A B C D
                                                A B C D

                                    */

#include <iostream>
using namespace std;
main() {
    int n;
    cout<<" Enter the Number: ";
    cin>>n;
    
    for(int i=1; i<=n; i++){        //Row
       for(int j=1; j<=n; j++){     //Colum
           cout<<char(j+64)<<" ";   //char(j+64)=char(1+64)=65(A)
       }
      cout<<endl;
    }
    
}