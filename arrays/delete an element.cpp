//delete an element
#include<iostream>
using namespace std;
int main(){
    int n,e,a[10],statement=0;
    cout<<"enter no of elements"<<endl;
    cin>>n;
    cout<<"enter your array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the element you want to delete"<<endl;
    cin>>e;
    for(int i=0;i<n;i++){
        if(e==a[i]){
            for(int j=i;j<n;j++){
                a[j]=a[j+1];
                statement=1;
            }
        }
    }
    if (statement=1){
        cout<<"array after deletion"<<endl;
        for(int i=0;i<n-1;i++){
            cout<<a[i]<<"\t";
        }
    }

    if (statement=0){
        cout<<"no element is deleted"<<endl<<"array is"<<endl;
        for(int i=0;i<n;i++){
            cout<<a[i]<<"\t";
        }
    }
}