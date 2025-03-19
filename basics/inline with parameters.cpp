#include<iostream>
using namespace std;
class dimensions
{
    public:
    int lenght, breadth, height;
    inline int area(int lenght, int breadth);
    inline int volume(int lenght, int breadth, int height);
};

int dimensions :: area(int lenght,int breadth)
{
    return (lenght*breadth);
}

int dimensions :: volume (int lenght, int breadth, int height)
{
    return (lenght*breadth*height);
}

int main()
{
    dimensions x;
    int lenght,breadth,height;
    cout<<"enter l,b,h"<<endl;
    cin>>lenght>>breadth>>height;
    cout<<"area is "<<x.area(lenght,breadth)<<endl;
    cout<<"volume is "<<x.volume(lenght,breadth,height)<<endl;
    
}