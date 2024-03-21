#include <iostream>
using namespace std;
int main() {
    int n;
    
    cout<<" Enter the Number: ";
    cin>>n;
    
    //Upper part of Triangle
    for(int i=1; i<=n; i++){        //Row
       for(int j=0; j<i; j++){     //Colum
           cout<<"*"<<" ";
       }
      cout<<endl;
    }

    //Lower Part of Triangle
    for(int i=n-1; i>0; i--){        //Row
       for(int j=0; j<i; j++){     //Colum
           cout<<"*"<<" ";
       }
      cout<<endl;
    }
    
    return 0;
}


