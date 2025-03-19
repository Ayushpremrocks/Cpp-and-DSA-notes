#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while (t--){
        int n,r; cin>>n>>r;
        vector<int>a(n);
        int count=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                swap(a[i],a[i+1]);
                count++;
            }
        }
        if(count==0 || r>1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
