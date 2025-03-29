#include<bits/stdc++.h>
using namespace std;

bool check(int n){
    bool isPrime = true;
    if(n<2){
        isPrime = false;
    }
    for(int i = 2; i<=n/2;i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

int main(){
    int n; cin>>n;
    if(check(n)){
        cout<<"is prime"<<endl;
    }else{
        cout<<"not prime"<<endl;
    }
}