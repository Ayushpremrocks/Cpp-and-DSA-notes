#include<iostream>
using namespace std;
int linearSearch(int array[],int element,int n);
int main(){
    int a[10];
    int n,x;
    cout<<"enter no of elements\n";
    cin>>n;
    cout<<"enter your array\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter element you want to search\n";
    cin>>x;
    int soln = linearSearch(a,x,n);
    if(soln != -1){
        cout<<"element found at index "<<soln;
    }else{
        cout<<"element not found";
    }
}

int linearSearch(int array[],int element,int n){
    for(int i=0;i<n;i++){
        if(array[i]==element){
            return i;
        }
    }
    return -1;
}