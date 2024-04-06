                                    /*  Print the opposite star triangle pattern.
                                            *
                                           **
                                          ***
                                         ****
                                        *****
                                    */

#include<iostream>
using namespace std;
main(){

    for(int i=1; i<=5; i++){            //Row
        for(int j=1; j<=5-i; j++){        //space
             cout<<" ";
        }
        for(int k=1; k<=i; k++){        //Colum
             cout<<"*";
        }

        cout<<endl;
    }
}

