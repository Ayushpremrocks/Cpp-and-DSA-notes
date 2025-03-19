#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// DFS (depth first search)

// Pre-Order Traversal (Node Left Right)
// time complexity = O(N)
// space complexity = O(N)
void preOrder(Node* node){
    if(node==nullptr) return;
    cout<<node->data<<" ";
    preOrder(node->left);
    preOrder(node->right);
}

//Post-Order Traversal (Left Right Node)
void postOrder(Node* node){
    if(node==nullptr) return;
    postOrder(node->left);
    postOrder(node->right);
    cout<<node->data<<" ";
}
//In-Order Traversal (Left Node Right)
void inOrder(Node* node){
    if(node==nullptr) return;
    inOrder(node->left);
    cout<<node->data<<" ";
    inOrder(node->right);
}

//BFS (breadth first search)

void BFS(Node* node){
    if(node==nullptr) return;
    queue<Node*> tree;
    tree.push(node);
    while(!tree.empty()){
        Node* node = tree.front();
        tree.pop();
        cout<<node->data<<" ";
        if(node->left != nullptr){
            tree.push(node->left);
        }
        if(node->right != nullptr){
            tree.push(node->right);
        }
    }
}

int main(){
    Node* root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);
    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);
    root -> right -> left = new Node(6);
    root -> right -> right = new Node(7);

    cout<<"Pre-Order Traversal: "<<endl;
    preOrder(root);
    cout<<endl;

    cout<<"Post-Order Traversal: "<<endl;
    postOrder(root);
    cout<<endl;

    cout<<"In-Order Traversal: "<<endl;
    inOrder(root);
    cout<<endl;

    cout<<"BFS Traversal: "<<endl;
    BFS(root);
    cout<<endl;
}