#include<iostream>
using namespace std;
void bubbleSort(int array[], int n);
int main(){
    int a[10];
    int n;
    cout<<"enter no of elements\n";
    cin>>n;
    cout<<"enter your array\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bubbleSort(a,n);
    cout<<"element after sorting\n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\n";
    }
}

void bubbleSort(int array[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(array[j]>array[j+1]){
                swap(array[j],array[j+1]);
            }
        }
    }
}