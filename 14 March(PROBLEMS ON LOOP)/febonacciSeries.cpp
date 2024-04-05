                                //Print the Nth fibonacci Number.

#include<iostream>
using namespace std;
main(){
    int Term,febonaci;
    int a=1;
    int b=0;
    
    cout<<"Enter the Term of Febonacci: ";
    cin>>Term;
    
    cout<<"Febonaci Series: ";      // 0,1,1,2,3,4,5,6...
    cout<<b<<" ";

    for(int i=1; i<=Term; i++){
        febonaci=a+b;            //febonacci=>0,1,febo.=>0+1=1,febo.=>1+1=2,febo.=>2+1=3,febo.=>3+1=4
                                 //febonacci=>0,1,1,2,3,4,5,6...
        cout<<febonaci<<" ";
        a=b;
        b=febonaci;
    }
}   
                        /*  Output
                            Enter the Term of Febonacci: 6
                            Febonaci Series: 0 1 1 2 3 5 8
                        */