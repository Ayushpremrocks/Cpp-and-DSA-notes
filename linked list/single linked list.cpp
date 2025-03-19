#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

void insertAtHead (Node* &head, int data){
    Node* temp = new Node(data);
    if (head == nullptr){
        head = temp;
    }else{
        temp -> next = head;
        head = temp;
    }
}

void insertAtTail (Node* &tail, int data){
    Node* temp = new Node(data);
    if (tail == nullptr){
        tail = nullptr;
    }else{
        tail -> next = temp;
        tail = temp;
        tail -> next = nullptr;
    }
}

void insertAtPosition (Node* &head, Node* &tail, int pos, int data){
    if(pos==1){
        insertAtHead(head,data);
        return;
    }
    Node* temp = head;
    int count = 1;
    while (count<pos-1){
        temp = temp -> next;
        count++;
    }

    if(temp -> next == nullptr){
        insertAtTail(tail, data);
        return;
    }
    Node* nodeToInsert = new Node(data);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int length(Node* &head){
    Node* temp = head;
    int len = 0;
    while(temp!=nullptr){
        len++;
        temp = temp -> next;
    }
    return len;
}

bool searchElement(Node* head,int value){
    Node* temp = head;
    while(temp!=nullptr){
        if(temp -> data == value){
            return true;
        }else{
            temp = temp -> next;
        }
    }
    return false;
}

int main(){
    Node* NewNode = new Node(2);
    Node* head = NewNode;
    Node* tail = NewNode;
    print(head);
    
    insertAtHead(head,1);
    print(head);
    
    insertAtTail(tail,4);
    print(head);

    insertAtPosition(head, tail, 3, 3);
    print(head);
    
    insertAtPosition(head, tail, 1, 0);
    print(head);
    
    insertAtPosition(head, tail, 6, 5);
    print(head);

    cout<<"lenght of linked list is "<<length(head)<<endl;

    if(searchElement(head, 5)){
        cout<<"element found"<<endl;
    }else{
        cout<<"element not found"<<endl;
    }
}