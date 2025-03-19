#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    unordered_map<int,int> value;
    for(int i =0;i<a.size();i++){
        value[a[i]]++;
    }
    for(auto it: value){
        cout<<it.first<<"->"<<it.second<<endl;
    }
}