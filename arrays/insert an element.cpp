//insert an element
#include<iostream>
using namespace std;
int main(){
    int n,e,p,a[10];
    cout<<"enter no of elements in your array"<<endl;
    cin>>n;
    cout<<"enter your array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter new element"<<endl;
    cin>>e;
    cout<<"enter position"<<endl;
    cin>>p;
    for(int i=n;i>=p;i--){
        a[i+1]=a[i];
    }
    a[p]=e;
    cout<<"new array"<<endl;
    for(int i=0;i<n+1;i++){
        cout<<a[i]<<"\t";
    }
}