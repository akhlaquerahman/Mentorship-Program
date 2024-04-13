#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"size of this vector = "<<v.size()<<endl;
    cout<<"capacity of this vector = "<<v.capacity()<<endl;

    v.push_back(10);
     cout<<"size of this vector = "<<v.size()<<endl;
    cout<<"capacity of this vector = "<<v.capacity()<<endl;
    
     v.push_back(20);
     cout<<"size of this vector = "<<v.size()<<endl;
    cout<<"capacity of this vector = "<<v.capacity()<<endl;
    
     v.push_back(30);
     cout<<"size of this vector = "<<v.size()<<endl;
    cout<<"capacity of this vector = "<<v.capacity()<<endl;
    
     v.push_back(40);
     cout<<"size of this vector = "<<v.size()<<endl;
    cout<<"capacity of this vectors = "<<v.capacity()<<endl;

   
v.resize(5);
cout<<"size of this vector = "<<v.size()<<endl;
    cout<<"capacity of this vectors = "<<v.capacity()<<endl;

v.resize(8);
cout<<"size of this vector = "<<v.size()<<endl;
    cout<<"capacity of this vectors = "<<v.capacity()<<endl;

v.pop_back();
v.pop_back();


}