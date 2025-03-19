#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while (t--){
        int n,x; cin>>n>>x;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int maxi = a[0]-0;
        if(((x-a[n-1])*2)>maxi){
            maxi = (x-a[n-1])*2;
        }
        for(int i=0;i<n-1;i++){
            if((a[i+1]-a[i])>maxi){
                maxi = a[i+1]-a[i];
            }
        }
        cout<<maxi<<endl;
    }
}