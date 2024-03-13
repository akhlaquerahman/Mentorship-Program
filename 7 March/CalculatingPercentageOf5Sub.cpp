                                        // Q1. Calculating percentage of 5 subjects

#include<iostream>
using namespace std;
main()
{
    float math,phy,che,eng,hindi,total,percentage;
    cout<<"Enter the Marks of Mathematics: ";
    cin>>math;
    cout<<"Enter the Marks of Physics: ";
    cin>>phy;
    cout<<"Enter the Marks of Chemistry: ";
    cin>>che;
    cout<<"Enter the Marks of English: ";
    cin>>eng;
    cout<<"Enter the Marks of Hindi: ";
    cin>>hindi;

    total=math+phy+che+eng+hindi;
    cout<<"Your Total Marks: = "<<total<<endl;

    percentage=total/5;
    cout<<"Your percentage is: = "<<percentage<<"%";
}

                                   /*            Output:-
                                    Enter the Marks of Mathematics: 92
                                    Enter the Marks of Physics: 95
                                    Enter the Marks of Chemistry: 99
                                    Enter the Marks of English: 95
                                    Enter the Marks of Hindi: 98
                                    Your Total Marks: = 479
                                    Your percentage is: = 95.8%
                                    */