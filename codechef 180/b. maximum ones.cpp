#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n,k; cin>>n>>k;
	    string s; cin>>s;
	    int countOnes = 0; int operations = 0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='1'){
	            countOnes++;
	        }
	    }
	    if(k==0){
	        cout<<countOnes<<endl;
	        continue;
	    }
	    for(int i=n-2;i>=0;i--){
	        if(s[i]=='0' && s[i+1]=='1'){
	            s[i]='1';
	            countOnes++;
	            operations++;
	            if(operations==k){
	                break;
	            }
	        }
	    }
	    cout<<countOnes<<endl;
	}

}