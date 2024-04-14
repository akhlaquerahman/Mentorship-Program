//WAP to find the smallest missing positive element in the sorted Array that contains only positive elements.

#include<iostream>
using namespace std;
int main(){
    int array[6]={1,2,3,5,6,7};
    int missing =1;

    for(int i=0; i<6; i++){
        if(array[i]== missing){
            missing++;
        }
        
    }
    cout<<"Smallest Missing Possitive Element: "<<missing;
}
                /*  Output
                    Smallest Missing Possitive Element: 4
                */