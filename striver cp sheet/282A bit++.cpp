#include <bits/stdc++.h>
using namespace std;


int main(){
    int n; cin>>n;
    int count = 0;
    vector<string>inc(n);
    for(int i=0;i<n;i++){
        cin>>inc[i];
    }
    for(int i=0;i<n;i++){
        if(inc[i]=="X++" || inc[i]=="++X"){
            count = count + 1;
        }else if(inc[i]=="X--" || inc[i]=="--X"){
            count = count - 1;
        }
    }
    cout<<count<<endl;
}