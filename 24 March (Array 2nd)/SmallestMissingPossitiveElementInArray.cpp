#include<iostream>
using namespace std;
main(){
    int array[6]={1,2,3,5,6,7};
    int missing =1;

    for(int i=0; i<6; i++){
        if(array[i]== missing){
            missing++;
        }
        
    }
    cout<<"Smallest Missing Possitive Element: "<<missing;
}