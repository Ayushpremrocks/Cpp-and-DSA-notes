#include<iostream>
#include<array>
#include<tuple>
using namespace std;
int main(){
    array<int,5> a={1,2,3,4,5};
    
    // 1) .at() is used to access elements
    cout<<"array using .at()"<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a.at(i)<<" ";
    }
    cout<<endl;

    // 2) .get<index> is also used to access elements
    cout<<"array using .get<index>"<<endl<<"element at 0 index is ";
    cout<<get<1>(a)<<endl;
    
    // 3) operator[] is also used to access elements
    cout<<"array using operator[]"<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    // 4) front() returns first element
    cout<<"first elements is "<<a.front()<<endl;

    // 5) back() returns first element
    cout<<"last elements is "<<a.back()<<endl;

    // 6) size() returns the size of array
    cout<<"size of array is "<<a.size()<<endl;

    // 7) max_size() returns the max size of array
    cout<<"max size of array is "<<a.max_size()<<endl;

    // 8) swap() all elements of one array with other;
    array<int,5> new_a = {10,20,30,40,50};
    a.swap(new_a);
    cout<<"array after swapping is ";
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    // 9) empty() check whether array is empty or not
    array<int,0> null;
    cout<<null.empty()<<endl;

    // 10) fill() fill entire array with value
    array<int,5> random;
    random.fill(10);
    cout<<"array after filling is ";
    for(int i=0;i<random.size();i++){
        cout<<random[i]<<" ";
    }
    cout<<endl;
}