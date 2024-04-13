#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(10);
    int i,j,n;
    cout<<"enter the value fo n:";
    cin>>n;
    cout<<"enter the vector element:";
    for(i=0; i<n; i++){
        cin>>v[i];
    }
     cout<<"This vectors is shorted: "<<endl;
    for(i=0; i<=n; i++ ){
        if(v[i]<v[i+1]){
      cout<<v[i]<<endl;
        }
        
        else{
            cout<<"this vectors is not shorted : "<<v[i]<<endl;
        }
        }
        return 0;
    }