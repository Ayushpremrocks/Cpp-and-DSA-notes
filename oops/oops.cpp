#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int uid;
}S1,S2;

int main()
{
    S1.name="ayush";
    S1.uid=10452;
    S2.name="prem";
    S2.uid=10452;

    cout<<"student "<<S1.name<<" uid is "<<S1.uid<<"\n";
    cout<<"student "<<S2.name<<" uid is "<<S2.uid<<"\n";


}
