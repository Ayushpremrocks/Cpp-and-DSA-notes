#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while (t--){
        int n; cin>>n;
        vector<int>a(n);
        vector<int>temp(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            temp[i]=a[i];
        }
        bool possible = true;
        sort(temp.begin(),temp.end());
        for(int i=i;i<n-1;i++){
            if(a[i]==temp[i] || a[i]==temp[i-1] || a[i]==temp[i+1]){
                continue;
            }else{
                possible=false;
                break;
            }
        }
        if(possible==true && a[0]==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}