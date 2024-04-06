                                    /*  Print the odd Number Triangle pattern

                                            1 
                                            1 3 
                                            1 3 5 
                                            1 3 5 7
                                    */

#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"Enter The Number: ";
    cin>>n;

    for(int i=1; i<=n; i++){            //Row
        int num=1;
        for(int j=1; j<=i; j++){        //Colum
            cout<<num<<" ";
            num=num+2;
        }
        cout<<endl;
    }
}