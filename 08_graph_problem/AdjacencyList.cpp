#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<vector<int>> &adj, int u, int v) {
   adj[u].push_back(v);
   adj[v].push_back(u);
}
void printAdjList(const vector<vector<int>> &adj) {
   cout << "\nAdjacency List:\n";
   for (int i = 0; i < adj.size(); i++) {
      cout << i << ": ";
      for (int neighbor : adj[i]) {
         cout << neighbor << " ";
      }
      cout << endl;
   }
}
int main() {
   int n, m;
   cout << "Enter number of nodes and edges: ";
   cin >> n >> m;
   vector<vector<int>> adj(n);

   cout << "Enter all edges (u v):\n";
   for (int i = 0; i < m; i++) {
      int u, v;
      cin >> u >> v;
      addEdge(adj, u, v);
   }
   printAdjList(adj);
   return 0;
}
