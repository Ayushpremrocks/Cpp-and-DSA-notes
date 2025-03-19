#include<iostream>
using namespace std;
void selectionSort(int array[], int n);
int main(){
    int a[10];
    int n;
    cout<<"enter no of elements\n";
    cin>>n;
    cout<<"enter your array\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    selectionSort(a,n);
    cout<<"element after sorting\n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\n";
    }
}

void selectionSort(int array[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j = i+1;j<n;j++){
            if(array[min]>array[j]){
                min = j;
            }
        }
        swap(array[min],array[i]);
    }
}