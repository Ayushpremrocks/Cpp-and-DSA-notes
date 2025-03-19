//  Merge Sort

//  Merge Sort is a sorting algorithm, it follows divide and conquer technique

//  Space complexity = O(n)
//  Time complexity = O(n log n) {same for best,worse and average}

//  Algorithm

//  merge(a,low,mid,high)
//  1)take temp as a temporary array
//  2)set left = low and right = mid+1
//  3)while left<=mid and right<=high
//      if a[left]<=a[right]
//          push a[left] in temp
//          left++
//      else
//          push a[right] in temp
//          right++
//  4)while left<=mid
//      push a[left] in temp
//  5)while right<=high
//      push a[right] in temp
//  6)copy the values of temp in the original array

//  mergeSort(a,low,high)
//  1) take mid = low+high/2
//  2) if low>=high, return
//  3) mergeSort(a,low,mid)
//  4) mergeSort(a,mid+1,high)
//  5) merge(a,low,mid,high)
//  6) return a


//  Code
#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& array,int low,int mid,int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left <= mid && right<=high){
        if(array[left]<=array[right]){
            temp.push_back(array[left]);
            left++;
        }else{
            temp.push_back(array[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(array[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(array[right]);
        right++;
    }
    for(int i =low;i<=high;i++){
        array[i]=temp[i-low];
    }
}

void mergeSort(vector<int>& array,int low,int high){
    int mid = (low+high)/2;
    if(low>=high){
        return;
    }
    mergeSort(array,low,mid);
    mergeSort(array,mid+1,high);
    merge(array,low,mid,high);
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
    mergeSort(a,0,n-1);
    cout<<"\nenter after sorting"<<endl;
    printArray(a,n);
}