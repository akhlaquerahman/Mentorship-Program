                                        /*  Print the star triangle pattern
                                            *
                                            **
                                            ***
                                            ****
                                        */

#include<iostream>
using namespace std;
main(){
    int a=5;

    for(int i=1; i<=5; i++){            //Row
        for(int j=1; j<=i; j++){        //Colum
            cout<<"* ";
        }
        cout<<endl;
    }
}