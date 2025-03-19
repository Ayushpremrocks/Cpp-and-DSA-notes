//Find all pairs of an integer array whose sum is equal to a given number.

#include<iostream>
using namespace std;

int main(){
    int n,a[10],sum;
    cout<<"enter no of elements"<<endl;
    cin>>n;
    cout<<"enter your array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"enter your no"<<endl;
    cin>>sum;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==sum){
                cout<<"pairs are "<<a[i]<<" and "<<a[j]<<endl;
            }
        }
    }

}