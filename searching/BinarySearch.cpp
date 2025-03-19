#include<iostream>
using namespace std;
int binarySearch(int array[],int element,int n);
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
    int soln = binarySearch(a,x,n);
    if(soln != -1){
        cout<<"element found at index "<<soln;
    }else{
        cout<<"element not found";
    }
}

int binarySearch(int array[],int element,int n){
    int l=0;
    int r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(element==array[mid]){
            return mid;
        }else if(array[mid]>element){
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    return -1;
}