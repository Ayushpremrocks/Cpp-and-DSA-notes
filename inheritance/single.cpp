// single inheritance
#include<iostream>
using namespace std;

class A{
    public:
    void x(){
        cout<<"base class"<<endl;
    }
};

class B : public A{
    public:
    void y(){
        cout<<"derived class"<<endl;
    }
}obj;

int main(){
    obj.x();
    obj.y();
}