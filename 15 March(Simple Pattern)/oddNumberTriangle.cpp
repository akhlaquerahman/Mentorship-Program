#include<iostream>
using namespace std;
main(){
    int a=10;

    for(int i=1; i<=a; i++){            //Row
        for(int j=1; j<=i; j++){        //Colum
            if(j%2!=0){
            cout<<j<<" ";
            }
        }
        cout<<endl;
    }
}