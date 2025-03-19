#include<iostream>
using namespace std;
int calFactorial(int int_val){
    if(int_val==0){
        return 1;
    }else{
        return int_val*calFactorial(int_val - 1);
    }
}

int main(){
    while (true){
        int num;
        cout<<"enter your number\n";
        cin>>num;
        if(num<0){
            cout<<"invalid output\n";
        }else{
            int soln = calFactorial(num);
            cout<<"factorial of "<<num<<" is "<<soln<<endl;
        }
        string choice;
        cout<<"want to continue?\ntype no to exit"<<endl;
        cin>>choice;
        if(choice == "no"){
            break;
        }
    }
}