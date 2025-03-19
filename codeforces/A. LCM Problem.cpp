#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    
    while(t--){
        long long l,r; cin>>l>>r;
        long long x = l; long long y = l*2;
        if(y>r){
            cout<<-1<<" "<<-1<<endl;
        }else{
            cout<<x<<" "<<y<<endl;
        }
    }
}
