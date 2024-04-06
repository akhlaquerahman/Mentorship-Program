                                    /*  Print the solid reactangle pattern

                                            *****
                                            *****
                                            *****                                    
                                    */

#include<iostream>
using namespace std;
main(){

    for(int i=1; i<=3; i++){            //Row
        for(int j=1; j<=7; j++){        //Colum
            cout<<"*";
        }
        cout<<endl;
    }
}