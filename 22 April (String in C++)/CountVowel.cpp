       //Input a string of length n and count all the vowels in the given string.


#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int count=0;
    string input;
    cout<<"Enter a sentence: ";
    getline(cin,input);

    cout<<"Size of string: "<<input.size()<<endl;

    for(int i=0; i<= input.size(); i++){
        char ch=input[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            count++;
        }
    }
    cout<<"Number of Vowel in the sentence: "<<count;

    return 0;
}

                        /*  Output
                            Enter a sentence: Akhlaque Rahman
                            Size of string: 15
                            Number of Vowel in the sentence: 6
                        */