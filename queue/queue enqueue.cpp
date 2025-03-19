#include<iostream>
using namespace std;
int queue[10], maximum=10, front= -1 , rear=-1;

void enqueue(int num){
    if(rear>maximum-1){
        cout<<"queue is full"<<endl;
    }
    else{
        rear++;
        queue[rear]=num;
    }
}

void display(){
    for(int i=front+1;i<=rear;i++){
        cout<<queue[i]<<" ";
    }
    cout<<endl;
}

int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    
    display();
}