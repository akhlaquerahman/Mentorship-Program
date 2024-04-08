            // Write a program to find the product of two numbers using pointers.

#include<iostream>
using namespace std;
int FindTheProduct(int *a,int *b){
    return (*a)*(*b);
}

main(){
    int num1,num2;
    cout<<"Enter The First Number: ";
    cin>>num1;
    cout<<"Enter The Second Number: ";
    cin>>num2;

    int *ptr1=&num1;
    int *ptr2=&num2;

    int product= FindTheProduct(ptr1,ptr2);

    cout << "Product of " << *ptr1 << " and " << *ptr2 << " is: " << product << endl;

}
                                /*  Output
                                    Enter The First Number: 5
                                    Enter The Second Number:  3
                                     Product of 5 and  3 is: 15
                                */