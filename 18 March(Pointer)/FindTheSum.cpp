                //Write a program to find the sum of two numbers using pointers

#include<iostream>
using namespace std;
int FindTheSum(int *a,int *b){
    return (*a)+(*b);
}

main(){
    int num1,num2;
    cout<<"Enter The First Number: ";
    cin>>num1;
    cout<<"Enter The Second Number: ";
    cin>>num2;

    int *ptr1=&num1;
    int *ptr2=&num2;

    int Sum= FindTheSum(ptr1,ptr2);

    cout << "Sum of " << *ptr1 << " and " << *ptr2 << " is: " << Sum << endl;

}
                        /*  Output
                            Enter The First Number: 5
                            Enter The Second Number: 8
                            Sum of 5 and 8 is: 13
                        */