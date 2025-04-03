#include <bits/stdc++.h>
using namespace std;
const int MOD = 998244353;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin>>n;
        long long output=1,base = 4,exp;
        if (n % 2 == 1){
            exp=(n-1)/2;
        } else{
            exp=n/2-1;
        }
        while(exp > 0){
            if(exp%2==1){
                output=(output*base)%MOD;
            }
            base=(base*base)%MOD;
            exp/= 2;
        }
        if(n%2==1){
            cout<<output<<endl;
        }else {
            cout<<(3*output) % MOD<<endl;
        }
    }
}