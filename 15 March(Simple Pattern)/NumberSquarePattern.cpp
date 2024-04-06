                                        /*  Print the number square pattern
                                            1 2 3 4
                                            1 2 3 4 
                                            1 2 3 4 
                                            1 2 3 4
                                        */

#include<iostream>
using namespace std;
int main(){
    int a=4;

    for(int i=1; i<=4; i++){            //Row
        for(int j=1; j<=4; j++){        //Colum
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}