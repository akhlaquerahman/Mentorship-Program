                    // Bubble Sort

#include<iostream>
#include<algorithm>
using namespace std;
 main(){
    int arr[5];

    cout<<"Enter the Element of Array"<<endl;
    for(int a=0; a<5; a++){
        cin>>arr[a];
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<5-1; j++){
            if(arr[j]>arr[j+1]){                  //10>6, 10>2,  10>7,  10>3
                swap(arr[j],arr[j+1]); //after swap 6,10, 2,10,   7,10, 3,10  first round(total 4 round)
            }
        }
    }

        // After loop completed 2,3,6,7,10  then print this array
    
     for (int k = 0; k < 5; k++) {
          cout << arr[k] << " ";
    }
}
                    /*  output
                        2 3 6 7 10 
                    */