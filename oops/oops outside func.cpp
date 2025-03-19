#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int uid;
    void input();
    void output();
}S1,S2;

void student :: input()
{
    cout<<"enter your name\n";
    cin>>name;
    cout<<"enter your uid\n";
    cin>>uid;
}

void student :: output()
{
    cout<<"\nstudent "<<name<<" uid is "<<uid<<"\n";
}

int main()
{
    S1.input();
    S1.output();
    S2.input();
    S2.output();
}
