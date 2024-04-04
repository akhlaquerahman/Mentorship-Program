            //Print all numbers from 1 to 100 that are divisible by 3

#include<iostream>
using namespace std;
main(){
    int i;
    for(i=1; i<=100; i++){
        if(i%3==0){
            cout<<i<<"\n";
        }
    }
}
                    /*  Output
                        3
                        6
                        9
                        12
                        15
                        18
                        21
                        24
                        27
                        30
                        33
                        36
                        39
                        42
                        45
                        48
                        51
                        54
                        57
                        60
                        63
                        66
                        69
                        72
                        75
                        78
                        81
                        84
                        87
                        90
                        93
                        96
                        99
                    */