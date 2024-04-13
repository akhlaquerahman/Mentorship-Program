#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(20);
    int i,n;
    int x;
    
    cout<<"enter the Term of number:";
    cin>>n;
    int count= 0;

    for(i=0; i<n; i++){
        cin>>v[i];
    }
    cout<<"enter the value ot x:";
    cin>>x;
    for(i=0; i<n; i++){
        if(v[i]==x){
            count++;
        }
       
    }
     cout<<"how many time :"<<count<<endl;
        cout<<"this the last occorence of entered item "<<i;
        return 0;
}
                    /*  Output
                        enter the Term of number:10
                        1
                        2
                        3
                        5
                        3
                        4
                        8
                        3   
                        6
                        8
                        enter the value ot x:3
                        how many time :3
                        this the last occorence of entered item 10
                    */

       