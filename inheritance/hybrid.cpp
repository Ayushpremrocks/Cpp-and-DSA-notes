//hybrid inheritance
#include<iostream>
using namespace std;

class A{
    public:
    void u(){
        cout<<"base class #1"<<endl;
    }
};
class B{
    public:
    void v(){
        cout<<"base class #2"<<endl;
    }
};
class C: public A{
    public:
    void w(){
        cout<<"base class #3"<<endl;
    }
};
class D: public B{
    public:
    void x(){
        cout<<"derived class #1"<<endl;
    }
};
class E: public C{
    public:
    void y(){
        cout<<"derived class #2"<<endl;
    }
};
class F: public C{
    public:
    void z(){
        cout<<"derived class #3"<<endl;
    }
};

int main(){
    
    D obj_1;
    obj_1.v();
    obj_1.x();
    
    E obj_2;
    obj_2.u();
    obj_2.w();
    obj_2.y();
    
    F obj_3;
    obj_3.u();
    obj_3.w();
    obj_3.z();
}