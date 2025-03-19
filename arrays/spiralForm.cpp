#include<iostream>
#include<vector>
using namespace std;

void spiralForm(vector<vector<int>> &a){
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[i].size();j++){
                cout<<a[i][j]<<" ";
        }
    }
}

int main(){
    int rows,columns;
    cout<<"enter no of rows and columns"<<endl;
    cin>>rows>>columns;
    vector<vector<int>> a(rows,vector<int>(columns));
    cout<<"enter your array"<<endl;
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[i].size();j++){
                cin>>a[i][j];
        }
    }
    cout<<"array in spiral"<<endl;
    spiralForm(a);
}