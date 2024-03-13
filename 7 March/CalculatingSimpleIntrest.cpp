                                            //Q4. Calculating Simple Interest

#include<iostream>
using namespace std;
main(){
    float principle,rate,time,SimpleIntrest;
    cout<<"Enter the Principle Amount: = ";
    cin>>principle;
    cout<<"Enter the Intrest Rate (in percentage): = ";
    cin>>rate;
    cout<<"Enter the Time (in year): = ";
    cin>>time;

    SimpleIntrest=(principle*rate*time)/100;

    cout<<"Your Simple Intrest: = "<<SimpleIntrest;
}

                                    /*  Output:-
                                    Enter the Principle Amount: = 500
                                    Enter the Intrest Rate (in percentage): = 10
                                    Enter the Time (in year): = 1
                                    Your Simple Intrest: = 50
                                    */