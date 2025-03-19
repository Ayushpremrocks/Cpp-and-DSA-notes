#include<iostream>
#include<vector>
using namespace std;

void sameArray(vector<vector<int>> &a,vector<vector<int>> &b){
    int count=0;
    if(a.size()!=b.size()){
        cout<<"arrays are not equal"<<endl;
    }else{
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a[i].size();j++){
                if(a[i][j]!=b[i][j]){
                    cout<<"arrays are not equal"<<endl;
                    return;
                }
            }
        }
        cout<<"arrays are equal"<<endl;
    }
}

int main(){
    int rows,columns;
    cout<<"enter no of rows and columns"<<endl;
    cin>>rows>>columns;
    vector<vector<int>> a(rows,vector<int>(columns));
    vector<vector<int>> b(rows,vector<int>(columns));;
    cout<<"enter your first array"<<endl;
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[i].size();j++){
                cin>>a[i][j];
        }
    }
    cout<<"enter your second array"<<endl;
    for(int i=0;i<b.size();i++){
        for(int j=0;j<b[i].size();j++){
                cin>>b[i][j];
        }
    }
    sameArray(a,b);
}