#include <iostream>
#include <vector>
using namespace std;

void edge(vector<vector<int>>&adj, int x, int y){
    adj[x].push_back(y);
    adj[y].push_back(x);
}

void depthFirstSearch(vector<vector<int>>& adj,vector<bool>& visitedNode,int currentNode){
    visitedNode[currentNode]=true;
    cout<<currentNode<<" ";

    for(int i=0;i<adj[currentNode].size();i++){
        int neighbourNode = adj[currentNode][i];

        if (!visitedNode[neighbourNode]){
            depthFirstSearch(adj,visitedNode,neighbourNode);
        }
    }
}

int main(){
    int vertices = 8;
    vector<vector<int>> graph(vertices);
    edge(graph,0,1);
    edge(graph,0,2);
    edge(graph,1,3);
    edge(graph,1,4);
    edge(graph,2,5);
    edge(graph,2,6);
    edge(graph,4,5);
    edge(graph,5,7);

    cout<<"Depth First Search of the graph is"<<endl;
    vector<bool> visitedNode(vertices, false);
    depthFirstSearch(graph,visitedNode,0);
}