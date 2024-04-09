                       // WAP to check if a number is prime or not (use of break statement)      
#include<iostream>
using namespace std;

int main()
{
    int n,check=0;
    cout<<"Enter The Number: ";
    cin>>n;
    
    for(int i=1; i<=n; i++){
        if(n%i==0){
            check++;
        }
    }
    if(check==2){
        cout<<"It is Prime Number: "<<n;
    }
    else{
        cout<<"It is Not Prime Number: "<<n;
    }
    return 0;
}                          
                        /*  Output
                        Enter The Number: 7
                        It is Prime Number: 7

                        Enter The Number: 10
                        It is Not Prime Number: 10
                        */