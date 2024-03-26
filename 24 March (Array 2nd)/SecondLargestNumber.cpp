#include<iostream>
using namespace std;

int main() {
    int array[5] = {7,4,2,8,9};
    
    int largest = array[0];        //7
    int secondLargest = array[0];  //7

    for (int i = 0; i < 5; ++i) {
        if (array[i] > largest) {
            secondLargest = largest;
            largest = array[i];
        } else if (array[i] > secondLargest) {
            secondLargest = array[i];
        }
    }

    cout << "Second largest element: " << secondLargest << endl;
    
    return 0;
}
