//stack implementation using double queue
//time complexity = O(N)
//space complexity = O(N)

#include<iostream>
#include<queue>
using namespace std;

class Stack{
    queue<int> q1,q2;

    public:

    //time complexity = O(N)
    //space complexity = O(1)
    void push(int x){
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1,q2);
    }

    //time complexity = O(1)
    //space complexity = O(1)
    void pop(){
        if(q1.empty()){
            return;
        }else{
            q1.pop();
        }
    }

    //time complexity = O(1)
    //space complexity = O(1)
    int top(){
        if(q1.empty()){
            return -1;
        }else{
            return q1.front();
        }
    }

    int size(){
        return q1.size();
    }

    //time complexity = O(N)
    //space complexity = O(1)
    void display(){
        if(q1.empty()){
            cout<<"stack is empty"<<endl;
            return;
        }else{
            queue<int> temp = q1;
            while(!temp.empty()){
                cout<<temp.front()<<" ";
                temp.pop();
            }
            cout<<endl;
        }
    }

    
}st;

int main(){
   st.push(1);
   st.push(2);
   st.push(3); 

   cout<<"size of stack is "<<st.size()<<endl;
   st.display();
   st.pop();
   st.display();
}