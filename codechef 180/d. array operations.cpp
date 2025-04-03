
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    vector<int> output;
    while (t--){
        int n; cin>>n;
        vector<int>a(n); int bonus; bool possible=false;
        for (int i=0; i<n; i++){
            cin>>a[i];
        }
        if(n==1){
            output.push_back(a[0]);
            continue;
        }

        int k=(n-1)/2;
        int m=*max_element(a.begin(), a.end());
        
        for (int i = 0;i<n; i=i+2){
            if (a[i] == m) {
                possible = true;
                break;
            }
        }

        if (possible){
            bonus = k;
        }else{
            if (k-1>= 0) {
                bonus = k-1;
            }else{
                bonus = 0;
            }
        }
        output.push_back(m + bonus);
    }
    for (int i=0;i<output.size();i++){
        cout<<output[i]<<endl;
    }
}