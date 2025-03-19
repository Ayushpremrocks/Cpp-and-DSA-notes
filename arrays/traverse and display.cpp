//traverse
#include<iostream>
using namespace std;
int main(){
    int n,a[10];
    cout<<"enter no of element"<<endl;
    cin>>n;
    cout<<"enter your array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
}