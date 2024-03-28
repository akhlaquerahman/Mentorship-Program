#include<iostream>
using namespace std;

main() {
    int array[5] = {7,2,14,8,15};
    
    int largest = array[0];        //7
    int secondLargest = largest;  //7

    for (int i = 0; i <= 5; i++) {
        if (array[i] > largest) {
            secondLargest = largest;
            largest = array[i];
        } 
        else if (array[i] > secondLargest && array[i]<largest) {
            secondLargest = array[i];
        }
    }

    cout << "Second largest element: " << secondLargest << endl;

}
