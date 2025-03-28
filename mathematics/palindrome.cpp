#include<bits/stdc++.h>
using namespace std;

bool revNum(int n){
    int rev = 0;
    int temp = n;
    while(n>0){
        rev = rev*10 + (n%10);
        n = n/10;
    }
    if(rev==temp){
        return true;
    }else{
        return false;
    }
}

int main(){
    int n; cin>>n;
    if(revNum(n)){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"No Palindrome"<<endl;
    }
}