#include<iostream>
#include<vector>
using namespace std;
void vectorDeclare(vector <int> &array,int n){
    for(int i=0;i<n;i++){
        array.push_back(i);
    }
}
int main(){
    vector<int> a;
    vectorDeclare(a,5);
    cout<<"output from begin and end"<<endl;
    for(auto i=a.begin();i !=a.end(); ++i){
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"output from cbegin and cend"<<endl;
    for(auto i=a.cbegin();i !=a.cend(); ++i){
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"output from rbegin and rend"<<endl;
    for(auto i=a.rbegin();i !=a.rend(); ++i){
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"output from crbegin and crend"<<endl;
    for(auto i=a.crbegin();i !=a.crend(); ++i){
        cout<<*i<<" ";
    }


    cout<<endl<<endl;


    cout<<"size of a is "<<a.size()<<endl;
    cout<<"max size of a is "<<a.max_size()<<endl;
    cout<<"capacity of a is "<<a.capacity()<<endl;
    a.resize(10);
    cout<<"size of a after resize is "<<a.size()<<endl;
    if(a.empty()==true){
        cout<<"vector is empty"<<endl;
    }else{
        cout<<"vector is not empty"<<endl;
    }
    a.shrink_to_fit();
    cout<<"size of a after shrink to fit is "<<a.size()<<endl;
    cout<<"element at first is "<<a.front()<<endl;
    cout<<"element at last is "<<a.back()<<endl<<endl;


    vector<int> v;
    //assign 10 3 times
    v.assign(10,3);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}