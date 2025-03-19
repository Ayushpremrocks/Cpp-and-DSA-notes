//multilevel inheritance
#include<iostream>
using namespace std;

class A{
    public:
    void x(){
        cout<<"base class #1"<<endl;
    }
};

class B: public A{
    public:
    void y(){
        cout<<"derived class #1"<<endl;
    }
};

class C : public B{
    public:
    void z(){
        cout<<"derived class #2"<<endl;
    }
}obj;

int main(){
    obj.x();
    obj.y();
    obj.z();
}