#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void edge(vector<vector<int>>&adj, int x, int y){
    adj[x].push_back(y);
    adj[y].push_back(x);
}

void breadthFirstSearch(vector<vector<int>>& adj,int source){
    queue<int> q;
    vector<bool> visitedNode(adj.size(),false);
    visitedNode[source]=true;
    q.push(source);

    while(!q.empty()){
        int currentNode = q.front();
        q.pop();
        cout<<currentNode<<" ";

        for(int i=0;i<adj[currentNode].size();i++){
            int neighbourNode = adj[currentNode][i];

            if(!visitedNode[neighbourNode]){
                visitedNode[neighbourNode]=true;
                q.push(neighbourNode);
            }
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

    cout<<"Breadth First Search of the graph is"<<endl;
    breadthFirstSearch(graph,0);
}