             //Print the table of n.

#include<iostream>
using namespace std;
main(){
    int i,n,table;
    cout<<"Enter the Value Of n: ";
    cin>>n;

    for(i=1; i<=10; i++){
        table=n*i;
            cout<<n<<" "<<"x"<<" "<<i<<" = "<<table<<endl;
        }
        
}   
                /*  Output
                    Enter the Value Of n: 6
                    6 x 1 = 6
                    6 x 2 = 12
                    6 x 3 = 18
                    6 x 4 = 24
                    6 x 5 = 30
                    6 x 6 = 36
                    6 x 7 = 42
                    6 x 8 = 48
                    6 x 9 = 54
                    6 x 10 = 60
                */