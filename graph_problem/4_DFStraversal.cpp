#include<iostream>
#include<vector>
#include<queue>
using  namespace std;

void dfs(int node, vector<int> adj[], vector<bool> &visited) {
    visited[node] = true;       // Pehle is node ko mark karo
    cout << node << " ";        // Print kar do

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited); // Uske child me jao (recursion)
        }
    }
}
int main (){
   int v = 5;
   vector<int> adj[v];

   adj[0].push_back(1);
   adj[0].push_back(2);
   adj[1].push_back(0);
   adj[1].push_back(3);
   adj[3].push_back(1);
   adj[2].push_back(0);
   adj[2].push_back(4);
   adj[4].push_back(2);

   vector<bool> visited(v, false);
   cout <<"DFS traversal: ";
   dfs(0, adj, visited);
   return 0;
}
