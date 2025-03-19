#include<iostream>
using namespace std;

class Myclass{
    public:
    int num;
    Myclass(){
        num=10;
    }
    
    Myclass(Myclass &a){
        num = a.num;
    }
}x;

int main(){
    Myclass d1(x);
    Myclass d2 = d1;
    cout<<d2.num<<endl;
    cout<<d1.num<<endl;
    cout<<x.num<<endl;
}