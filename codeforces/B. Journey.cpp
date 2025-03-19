#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        long long a,b,c; cin>>a>>b>>c;
        long long cycles = n/(a+b+c);
        long long total = (a+b+c)*cycles;
        long long days = 3*cycles;
        while(total<n){
            total = total + a;
            days++;
            if(total>=n) break;
            total = total + b;
            days++;
            if(total>=n) break;
            total = total + c;
            days++;
            if(total>=n) break;
        }
        cout<<days<<endl;

    }
}