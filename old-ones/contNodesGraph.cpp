#include <bits/stdc++.h>
using namespace std;

class graph {
    int n;
    list<int> *adj;
public:
    graph(int n);
    void addEdge(int v, int w);
    void bfs(int s);
};

graph::graph(int n) {
    this->n = n;
    adj = new list<int>[n];
}
void graph::addEdge(int v, int w){
    adj[v].push_back(w);
}
void graph::bfs(int s) {
    bool *visited = new bool[n];
    for(int i = 0; i < n; i++)
        visited[i] = false;
    list<int> q;
    visited[s] = true;
    q.push_back(s);
    list<int>::iterator i;
    while(!q.empty()){
        s = q.front();
        cout << s <<' ';
        q.pop_front();
        for(i = adj[s].begin(); i != adj[s].end(); i++) {
            if(!visited[*i]){
                visited[*i] = true;
                q.push_back(*i);
            }
        }
    }
}

int main(){
    vector<int> a{4, 7 , 8, 6, 4};
    vector<vector<int>> b {
        {1, 5},
        {5, 2},
        {2, 3},
        {2, 4}
    };
    vector<vector<int>> k {
        {0, 4},
        {4, 1},
        {1, 2},
        {1, 3}
    };
    vector<vector<int>> c {
        {4,2,1},
        {2,3,7},
        {2,4,8},
        {5,3,1},
        {3,4,8}
    };
    graph G(5);
    G.addEdge(0, 4);
    G.addEdge(5, 2);
    G.addEdge(2, 3);
    G.addEdge(2, 4);
    G.bfs(0);
}
