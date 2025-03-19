#include<iostream>
using namespace std;
int stack[10], top = 0, maxstk = 10;

void push(int val){
	if(top > maxstk){
		cout<<"Overflow"<<endl;
	}
	else{
		top++;
		stack[top] = val;
	}
}

void pop(){
	if(top<0){
		cout<<"Underflow"<<endl;
	}
	else{
		top--;
	}
}

void peek(){
	cout<<"Top element:"<<stack[top]<<endl;
}

void isEmpty(){
	if(top<=0){
		cout<<"Stack is empty"<<endl;
	}
	else{
		cout<<"Stack is not empty"<<endl;
	}
}
void display(){
	for(int i= top; i>0; i--){
			cout<<stack[i]<<" ";
		}
		cout<<endl;
	}

int main(){
	
	push(2);
	display();
	
	push(5);
	display();
	
	push(7);
	display();
	
	pop();
	display();
	
	peek();
	
	isEmpty();
	
	return 0;
}
