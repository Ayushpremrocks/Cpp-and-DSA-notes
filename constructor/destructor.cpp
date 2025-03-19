#include<iostream>
using namespace std;
class myclass{
    public:
    myclass(){
        cout<<"hi"<<endl;
    }
    ~myclass(){
        cout<<"bye";
    }
};
int main(){
    myclass x;
}