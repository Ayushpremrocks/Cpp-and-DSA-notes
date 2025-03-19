#include<iostream>
#include<stack>
using namespace std;

int precedence(char c){
	if(c == '^')
	return 3;
	else if(c == '/' || c == '*')
	return 2;
	else if(c == '+' || c == '-')
	return 1;
	else 
	return -1;
}

char associativity(char ch){
	if(ch == '^')
	return 'R';
	else
	return 'L';
}

void infixToPostfix(string s){
	
	stack<char>stk;
	string result;
	
	for(int i = 0; i<s.length(); i++){
		char cha = s[i];
		
		if((cha>='a' && cha<='z') || (cha>='A' && cha<='Z') || (cha>='0' && cha<='9'))
		result+=cha;
		
		else if(cha == '(')
		stk.push('(');
		
		else if(cha == ')'){
			while(stk.top()!='('){
			result += stk.top();
			stk.pop();
		}
		stk.pop();
	}
		else{
			while(!stk.empty() && precedence(cha) <= precedence(stk.top()) && associativity(cha) == associativity(stk.top())){
				result+=stk.top();
				stk.pop();
			}
			stk.push(cha);
		}
	}
	while(!stk.empty()){
		result+=stk.top();
		stk.pop();
	}
	cout<<result<<endl;
}

int main(){
	string exp = "A+(B*C-(D/E^F)*G)*H";
	
	infixToPostfix(exp);
	return 0;
}
