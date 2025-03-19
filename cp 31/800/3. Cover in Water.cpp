#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        int countDots = 0;
        int countTriple = 0;
        for(int i=0;i<n-2;i++){
            if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.'){
                countTriple++;
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                countDots++;
            }
        }
        if(countTriple>0){
            cout<<2<<endl;
        }else{
            cout<<countDots<<endl;
        }

    }
}