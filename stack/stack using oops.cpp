#include<iostream>
#include<stack>
using namespace std;
class my_stack{
    public:
    int *arr,top,size;
    
    my_stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }
    
    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }
    
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack underflow";
        }
    }
    
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }
    
    void isempty(){
	    if(top<=0){
		cout<<"Stack is empty"<<endl;
	    }
	    else{
		cout<<"Stack is not empty"<<endl;
	    }
    }
    
    void display(){
	for(int i=top; i>=0; i--){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}

};

int main(){
    my_stack x(5);
    x.push(1);
    x.push(2);
    x.push(3);
    cout<<x.peek()<<endl;
    x.display();
    
    x.isempty();
    
    x.pop();
    x.display();
}

