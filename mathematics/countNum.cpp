#include<bits/stdc++.h>
using namespace std;

int countNum(int n){
    int count = 0;
    while(n>0){
        n = n/10;
        count++;
    }
    return count;
}

int main(){
    int n; cin>>n;
    cout<<countNum(n)<<endl;
}