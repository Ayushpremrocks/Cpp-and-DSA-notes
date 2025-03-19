#include<iostream>
using namespace std;

void func(int x, int y){
    cout<<"sum = "<< (x+y)<<endl;
}

void func(float x, float y){
    cout<<"sum = "<< (x+y)<<endl;
}

int main(){
    func(3,4);
    func(4.4f,7.8f);
}