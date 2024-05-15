                //Write a program to add two matrices

#include<iostream>
using namespace std;

 main(){
    int a[3][3],b[3][3],c[3][3];
    cout<<"Enter the first matrix";
    for(int i=0; i<3;i++){
        for(int j=0; j<3; j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter the second matrix";
    for(int i=0; i<3;i++){
        for(int j=0; j<3; j++){
            cin>>b[i][j];
        }
    }
    for(int i=0; i<3;i++){
        for(int j=0; j<3; j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    
    cout<<"Sum of two matrix";
    cout<<"Enter the second matrix";
    for(int i=0; i<3;i++){
        for(int j=0; j<3; j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}
                                    /*  Output
                                        Matrix A:
                                        1 2 3 
                                        4 5 6 
                                        7 8 9 
                                        Matrix B:
                                        9 8 7 
                                        6 5 4 
                                        3 2 1 
                                        Sum of matrices A and B:
                                        10 10 10 
                                        10 10 10
                                        10 10 10
                                    */