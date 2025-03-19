#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>&a, int low, int high){
    int pivot = a[low];
    int i=low;
    int j=high;
    while(i<j){
        while(a[i]<=pivot && i<=high-1){
            i++;
        }
        while(a[j]>pivot && j>= low+1){
            j--;
        }
        if(i<j){
            swap(a[i],a[j]);
        }
    }
    swap(a[low],a[j]);
    return j;
}

//  Quick sort is a sorting algorithm, it works on the principle of divide and conquer
//  time complexity = O(n log n) {best and avg}
//                    O(n^2) {worst}
//  space complexity = O(n)

//  partition(a,low,high)
//  1) pivot = a[low]
//  2) set i = low and j = high
//  3) repeat steps 4 to 6 while i<j
//  4) if a[i]<=pivot, i++
//  5) if a[j]>pivot, j++
//  6) if i<j, swap a[i],a[j], end of loop
//  7) swap pivot with a[j]

//  quickSort(a,low,high)
//  1) repeat steps 2 to 5 while low<high
//  2) pivot = partition(a,low,high)
//  3) quickSort(a,low,pivot-1)
//  4) quickSort(a,pivot+1,high)
void quickSort(vector<int>&a,int low,int high){
    if(low<high){
        int pivot = partition(a,low,high);
        quickSort(a,low,pivot-1);
        quickSort(a,pivot+1,high);
    }
}
void printArray(vector<int>& array,int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"enter no of elements"<<endl;
    cin>>n;
    vector<int> a(n);
    cout<<"enter your array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"\nenter before sorting"<<endl;
    printArray(a,n);
    quickSort(a,0,n-1);
    cout<<"\nenter after sorting"<<endl;
    printArray(a,n);
}
