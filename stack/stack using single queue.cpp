//stack implementation using single queue
#include <iostream>
#include <queue>
using namespace std;

class Stack {
    queue<int> q;

public:
    // time complexity = O(N)
    // space complexity = O(1)
    void push(int x) {
        int size = q.size();
        q.push(x);
        
        // Rotate the queue to make the newly added element the front of the queue
        for (int i = 0; i < size; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    // time complexity = O(1)
    // space complexity = O(1)
    void pop() {
        if (q.empty()) {
            cout << "stack underflow" << endl;
            return;
        } else {
            q.pop();
        }
    }

    // time complexity = O(1)
    // space complexity = O(1)
    int top() {
        if (q.empty()) {
            return -1;
        } else {
            return q.front();
        }
    }

    int size() {
        return q.size();
    }

    // time complexity = O(N)
    // space complexity = O(1)
    void display() {
        if (q.empty()) {
            cout << "stack is empty" << endl;
            return;
        } else {
            queue<int> temp = q; // Create a copy of the queue to display elements
            while (!temp.empty()) {
                cout << temp.front() << " ";
                temp.pop();
            }
            cout << endl;
        }
    }
} st;

int main() {
    st.push(1);
    st.push(2);
    st.push(3);

    cout << "size of stack is " << st.size() << endl;
    st.display();
    st.pop();
    st.display();
}
