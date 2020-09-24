#include <bits/stdc++.h>
using namespace std;

void dfs(vector<pair<int, int>> *adj, int start, vector<bool>& vis){
    cout << start << ' ';   
    vis[start] = true;
    for(auto it = adj[start].begin(); it != adj[start].end(); it++){
        if(!vis[it->first])
            dfs(adj, it->first, vis);
    }
    //cout << endl;
}

void bfs(vector<pair<int, int>> *adj, int start, vector<bool>& vis){
    queue<int> q;
    q.push(start);
    while(!q.empty()){
        int item = q.front();
        cout << item << ' ';
        q.pop();
        for(auto it = adj[item].begin(); it != adj[item].end(); it++){
            if(!vis[it->first]){
                vis[it->first] = true;
                q.push(it->first);
            }
        }
    }
}

int minDistance(vector<int> d, set<int> u) 
{ 
    int V= 4;
    // Initialize min value 

    int min = INT_MAX, min_index; 
  
    for (int v = 0; v < V; v++) 
        if (u.find(d[v]) == u.end() && d[v] <= min) 
            min = d[v], min_index = v; 
  
    return min_index; 
}


int V = 4;
void dijkstra(vector<pair<int, int>> *adj, int source){
    vector<int> distance(V, INT_MAX-100);
    distance[source] = 0;
    set<int> visited;
    while((int)visited.size() < V){
        int u = minDistance(distance, visited);
        visited.insert(u);
        for(auto v = adj[u].begin(); v != adj[u].end(); v++){
            distance[v->first] = min(distance[v->first], distance[u] + v->second);
        }
    }
    for(int e : distance)
        cout << e << ' ';
    cout << endl;
}

int main(){
    vector<pair<int, int>> adj[4];
    //adj[0].push_back({1, 1});
    //adj[0].push_back({2, 4});
    //adj[1].push_back({2, 4});
    //adj[1].push_back({3, 2});
    //adj[1].push_back({4, 7});
    //adj[2].push_back({1, 4});
    //adj[2].push_back({4, 5});
    //adj[2].push_back({3, 3});
    //adj[3].push_back({2, 3});
    //adj[3].push_back({4, 4});
    //adj[3].push_back({5, 6});
    //adj[4].push_back({1, 4});
    //adj[4].push_back({2, 5});
    //adj[4].push_back({3, 4});
    //adj[4].push_back({3, 4});
    //adj[5].push_back({4, 7});
    //adj[5].push_back({3, 6});
    adj[0].push_back({1, 1}); 
    adj[0].push_back({2, 3}); 
    adj[0].push_back({1, 1}); 
    adj[1].push_back({2, 2}); 
    adj[1].push_back({3, 5}); 
    adj[2].push_back({0, 3}); 
    adj[2].push_back({1, 3}); 
    adj[2].push_back({3, 4}); 
    //int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 }, 
                        //{ 4, 0, 8, 0, 0, 0, 0, 11, 0 }, 
                        //{ 0, 8, 0, 7, 0, 4, 0, 0, 2 }, 
                        //{ 0, 0, 7, 0, 9, 14, 0, 0, 0 }, 
                        //{ 0, 0, 0, 9, 0, 10, 0, 0, 0 }, 
                        //{ 0, 0, 4, 14, 10, 0, 2, 0, 0 }, 
                        //{ 0, 0, 0, 0, 0, 2, 0, 1, 6 }, 
                        //{ 8, 11, 0, 0, 0, 0, 1, 0, 7 }, 
                        //{ 0, 0, 2, 0, 0, 0, 6, 7, 0 } };

    dijkstra(adj, 0);
}
