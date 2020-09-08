#include <bits/stdc++.h>
using namespace std;

class Graph {
    int V;
    list<int> *adj;
public:
    Graph(int n){
        this->V = n;
        adj = new list<int>[V];
    }
    void addEdge(int v, int u){
        // directed graph
        adj[v].push_back(u);
    }
    // DFS
    void dfsUtil(int s, vector<bool>& visited){     
                                        // put & pass by reference
        visited[s] = true;              // curr node visited
        cout << s <<' ';

        list<int> neigh = adj[s];       // list of all neighbours of curr

        for(int i:neigh){
            if(!visited[i])             // if not visited the dfs on all neighbours
                dfsUtil(i, visited);
        }
    }
    void dfs(int s){
        vector<bool> visited(V);
        dfsUtil(s, visited);
    }
    // BFS
    void bfs(int s){
        vector<bool> visited(V);
        queue<int> q;

        q.push(s);
        int curr;

        while(!q.empty()){
            curr = q.front();
            q.pop();

            cout << curr <<' ';

            list<int> neighbours = adj[curr];

            for(int neighbour:neighbours){
                if(!visited[neighbour]){
                    visited[neighbour] = true;
                    q.push(neighbour);
                }
            }
        }
    }
};


int main(){
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 3);
    g.dfs(0);
    cout << endl;
    g.bfs(0);
}
