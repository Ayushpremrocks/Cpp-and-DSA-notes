#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        int x=0;
        cin>>n>>m;
        vector<string>result(n);
        for(int i=0;i<n;i++){
            cin>>result[i];
        }
        
        int totalLenght=0;
        for(int i=0;i<n;i++){
            int currentLenght = result[i].size();
            if(totalLenght+currentLenght<=m){
                totalLenght = totalLenght+currentLenght;
                x++;
            }else{
                break;
            }
        }
        cout<<x<<endl;
    }
}