#include<iostream>
using namespace std;

class Node{
    public:
    int num;
    Node* next;

    Node(int data){
        num = data;
        next = NULL;
    }
};

void insert_head(Node* &head, int num){
    Node* temp = new Node(num);
    temp -> next = head;
    head = temp;
}

void insert_tail(Node* &tail, int num){
    Node* temp = new Node(num);
    tail -> next = temp;
    tail = temp;
    temp -> next = NULL;
}

void insert_position(Node* &head, int pos, int num){
	Node* temp = head ;
	int count = 1;
	while(count<pos-1){
		temp = temp -> next;
		count++;
	}
	Node* nodeToInsert = new Node(num);
	nodeToInsert -> next = temp -> next;
	temp -> next = nodeToInsert;
}

void delete_position(Node* &head, int pos){
	if(pos == 0){
		Node* temp = head;
		head = head -> next;
        //free memory
		temp -> next = NULL;
	}
	else{
		Node* current = head;
		Node* previous = NULL;
		int count = 1;
		while(count < pos){
			previous = current;
			current = current -> next;
			count++;
		}
		previous -> next = current -> next;
		current -> next = NULL;
	}
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<< temp -> num <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
    //creating a linked list
    Node* node_1 = new Node(10);

    //insertion at head
    Node* head = node_1;
    print(head);
    insert_head(head,12);
    print(head);
    insert_head(head,15);
    print(head);

    //insertion at tail
    Node* tail = node_1;
    insert_tail(tail,8);
    print(head);

    //insertion at position
    insert_position(head, 2, 18);
    print(head);
    insert_position(head, 1, 16);
    print(head);

    //deletion
    delete_position(head, 0);
    print(head);

    delete_position(head,3);
    print(head);
}