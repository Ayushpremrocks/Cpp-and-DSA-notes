#include<iostream>
using namespace std;
void insertionSort(int array[], int n);
int main(){
    int a[10];
    int n;
    cout<<"enter no of elements\n";
    cin>>n;
    cout<<"enter your array\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    insertionSort(a,n);
    cout<<"element after sorting\n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\n";
    }
}

void insertionSort(int array[],int n){
    for(int i=1;i<n;i++){
        int temp = array[i];
        int j = i-1;
        while(array[j]>temp && j>=0){
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=temp;
    }
}