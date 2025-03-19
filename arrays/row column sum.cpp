#include<iostream>
using namespace std;

int main(){
    int i,j,sum_row[i], sum_columns[j],a[i][j];
    cout<<"enter no of rows"<<endl;
    cin>>i;
    cout<<"enter no of columns"<<endl;
    cin>>j;
    cout<<"enter your array"<<endl;
    for(int p=0;p<i;p++){
        for(int q=0;q<j;q++){
            cin>>a[p][q];
        }
    }
    for(int p=0;p<i;p++){
        sum_row[p]=0;
        for(int q=0;q<j;q++){
            sum_row[p]+=a[p][q];
        }
    }
    for(int q=0;q<j;q++){
        sum_columns[q]=0;
        for(int p=0;p<i;p++){
            sum_columns[q]+=a[p][q];
        }
    }
    cout<<"your array"<<endl;
    for(int p=0;p<i;p++){
        for(int q=0;q<j;q++){
            cout<<a[p][q]<<" ";
        }
        cout<<endl;
    }
    cout<<"sum of all the rows"<<endl;
    for(int p=0;p<i;p++){
        cout<<sum_row[p]<<" ";
    }
    cout<<endl;
    cout<<"sum of all the columns"<<endl;
    for(int q=0;q<j;q++){
        cout<<sum_columns[q]<<"\t";
    }
}
