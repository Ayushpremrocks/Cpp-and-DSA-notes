#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        vector<int>total(n);
        for(int i=0;i<n;i++){
            cin>>total[i];
            sum=sum+total[i];
        }
        if(sum%n!=0){
            cout<<"NO"<<endl;
            continue;
        }
        int mean=sum/n;
        int makeEqual=0;
        int result=1;
        for(int i=0;i<n;i++){
            makeEqual=makeEqual+(total[i]-mean);
            if(makeEqual<0){
                result=-1;
                break;
            }
        }
        if(result>0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
