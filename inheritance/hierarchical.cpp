//hierarchical inheritance
#include<iostream>
using namespace std;

class A{
    public:
    void t(){
        cout<<"base class #1"<<endl;
    }
};

class B: public A{
    public:
    void u(){
        cout<<"base class #2"<<endl;
    }
};
class C: public A{
    public:
    void v(){
        cout<<"base class #3"<<endl;
    }
};
class D: public B{
    public:
    void w(){
        cout<<"derived class #1"<<endl;
    }
};
class E: public B{
    public:
    void x(){
        cout<<"derived class #2"<<endl;
    }
};
class F: public C{
    public:
    void y(){
        cout<<"derived class #3"<<endl;
    }
};
class G : public C{
    public:
    void z(){
        cout<<"derived class #4"<<endl;
    }
};

int main(){
    
    D obj_1;
    obj_1.t();
    obj_1.u();
    obj_1.w();
    
    E obj_2;
    obj_2.t();
    obj_2.u();
    obj_2.x();
    
    F obj_3;
    obj_3.t();
    obj_3.v();
    obj_3.y();
    
    G obj_4;
    obj_4.t();
    obj_4.v();
    obj_4.z();
}