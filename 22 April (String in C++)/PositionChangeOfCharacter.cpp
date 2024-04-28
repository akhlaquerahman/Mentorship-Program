#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string input;
    cout<<"Enter The Sentence: ";
    getline(cin,input);

    cout<<"Size Of String: "<<input.length()<<endl;

    for(int i=0; i<=input.length(); i++){
        if(i%2==0){
            input[i]='a';
        }
    }
    cout<<"Update Position Of String: "<<input<<endl;

    return 0;
}
                            /*  Output
                                Enter The Sentence: Akhlaque
                                Size Of String: 8
                                Update Position Of String: akalaqae
                            */