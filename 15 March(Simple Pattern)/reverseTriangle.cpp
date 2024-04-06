                                /*  Print the reverse star triangle pattern
                                    ****
                                    ***
                                    **
                                    *
                                */

#include<iostream>
using namespace std;
main(){
    int a=5;

    for(int i=1; i<=5; i++){            //Row
        for(int j=i; j<=5; j++){        //Colum
            cout<<"* ";
        }
        cout<<endl;
    }
}