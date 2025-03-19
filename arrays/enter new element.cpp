#include<iostream>
using namespace std;

int main(){
    int a[20],n,element,pos;
    cout<<"enter no of element you want to enter"<<endl;
    cin>>n;
    cout<<"enter your elements"<<endl;
    for(int i;i<n;i++){
        cin>>a[i];
    }
    cout<<"your elements before adding an element is"<<endl;
    for(int i;i<n;i++){
        cout<<a[i]<<"\t";
    }

    cout<<"enter your new element";
    cin>>element;
    cout<<"enter the position at which you want to enter your new element"<<endl;
    cin>>pos;
    for(int i;i<n;i++){
        a[i+1]=a[i];
    }
    a[pos]=element;
    cout<<"array is"<<endl;
    for(int i;i<n;i++){
        cout<<a[i]<<"\t";
    }
}