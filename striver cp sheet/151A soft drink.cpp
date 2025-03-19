#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,k,l,c,d,p,nl,np; cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int totalVoln = (k*l)/nl;
    int totalSlices = c*d;
    int totalSalt = p/np;
    int min = 0;
    if(totalVoln<totalSlices){
        if(totalVoln<totalSalt){
            min = totalVoln;
        }else{
            min = totalSalt;
        }
    }else{
        if(totalSlices<totalSalt){
            min = totalSlices;
        }else{
            min = totalSalt;
        }
    }
    cout<<min/n<<endl;
}