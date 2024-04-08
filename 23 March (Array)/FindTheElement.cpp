                        //Find the element x in the array . Take array and x as input.


#include<iostream>
using namespace std;
main(){
    int a[5]={10,20,30,40,50};
    int item;

    cout<<"Enter the Element You want to find in index: ";
    cin>>item;

    for(int i=0; i<=5; i++){
        if(a[i]==item){
            cout<<"Your Find Number is here in index: "<<i;
        }
    }
}
                                /*  Output
                                    Enter the Element You want to find in index: 40
                                    Your Find Number is here in index: 3
                                */