#include<iostream>
using namespace std;
class myclass
{
    public:
    int a,b;
    myclass(int a, int b)
    {
        cout<<"sum of "<<a<<" and "<<b<<" is "<<a+b;
    }
};
int main()
{
    myclass x(3,4);
}