// multiple inheritance
#include<iostream>
using namespace std;

class A{
    public:
    void x(){
        cout<<"base class #1"<<endl;
    }
};

class B{
    public:
    void y(){
        cout<<"base class #2"<<endl;
    }
};

class C : public A,public B{
    public:
    void z(){
        cout<<"derived class"<<endl;
    }
}obj;

int main(){
    obj.x();
    obj.y();
    obj.z();
}