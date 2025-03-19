#include<iostream>
using namespace std;

namespace first{
    void func(){
        cout<<"first namespace"<<endl;
    }
}

namespace second{
    void func(){
        cout<<"second namespace"<<endl;
    }
}

int main(){
    first ::func();
    second::func();
}