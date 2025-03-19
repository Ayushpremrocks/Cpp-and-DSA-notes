// stack implementation using arrays
//space complexity = O(N)
#include<iostream>
#include<vector>
using namespace std;
int stack[10], top = -1, maxi = 10;

//time complexity = O(1)
//space complexity = O(1)
void push(int val){
    if(top>=maxi-1){
        cout<<"stack overflow"<<endl;
    }else{
        top++;
        stack[top]=val;
    }
}

//time complexity = O(1)
//space complexity = O(1)
void pop(){
    if(top<0){
        cout<<"stack underflow"<<endl;
    }else{
        top--;
    }
}

//time complexity = O(1)
//space complexity = O(1)
void peek(){
    if(top>=0){
        cout<<"top element is "<<stack[top]<<endl;
    }else{
        cout<<"stack is empty"<<endl;
    }
}

//time complexity = O(1)
//space complexity = O(1)
void isEmpty(){
    if(top<0){
        cout<<"stack is empty"<<endl;
    }else{
        cout<<"stack is not empty"<<endl;
    }
}

//time complexity = O(N)
//space complexity = O(1)
void display(){
    if(top>=0){
        for(int i=top; i>=0; i--){
            cout<<stack[i]<<" ";
        }
        cout<<endl;
    }else{
        cout<<"stack is empty"<<endl;
    }
}

int main(){

    isEmpty();

    push(1);
    display();

    push(2);
    display();

    push(4);
    display();

    pop();
    display();

    push(3);
    display();

    isEmpty();

    peek();
}