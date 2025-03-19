#include<iostream>
using namespace std;
int binarySearch(int array[],int l,int r,int element);
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
    int soln = binarySearch(a,0,n-1,x);
    if(soln != -1){
        cout<<"element found at index "<<soln;
    }else{
        cout<<"element not found";
    }
}

int binarySearch(int array[],int l,int r,int element){
    while(l<=r){
        int mid=(l+r)/2;
        if(element==array[mid]){
            return mid;
        }else if(array[mid]>element){
            return binarySearch(array,l,mid-1,element);
        }else{
            return binarySearch(array,mid+1,r,element);
        }
    }
    return -1;
}