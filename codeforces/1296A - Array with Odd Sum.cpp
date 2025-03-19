#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        vector<long long>a(n);
        long long oddCount=0;
        long long evenCount = 0;
        long long sum = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum = sum+a[i];
            if(a[i]%2!=0){
                oddCount++;
            }else if(a[i]%2==0){
                evenCount++;
            }
        }
        if(sum%2!=0){
            cout<<"YES"<<endl;
        }else if(oddCount>0 && evenCount>0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}