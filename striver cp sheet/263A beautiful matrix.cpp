#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<vector<int>> matrix(5,vector<int>(5));
    int xCord,yCord;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(matrix[i][j]==1){
                xCord = i; yCord = j;
                break;
            }
        }
    }
    cout<<(abs(2-xCord)+abs(2-yCord))<<endl;
}