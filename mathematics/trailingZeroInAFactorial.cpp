#include<bits/stdc++.h>
using namespace std;

int countTrailingZero(int n){
    int zeroes = 0;
    for(int i=5;i<n;i=i*5){
        zeroes = zeroes + n/i;
    }
    return zeroes;
}

int main(){
    int n; cin>>n;
    cout<<countTrailingZero(n)<<endl;
}