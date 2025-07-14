#include <iostream>
#include <vector>
using namespace std;

// Function to add edge to adjacency list
void addEdge(vector<vector<int>> &adj, int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printAdjList(const vector<vector<int>> &adj, int nodes) {
    cout << "\nAdjacency List:\n";
    for (int i = 1; i <= nodes; i++) {
        cout << i << ": ";
        for (int neighbor : adj[i]) {
            cout << neighbor << " ";
        }
        cout << endl;
    }
}
int main() {
    int nodes, edges;
    cout << "Enter number of nodes and edges: ";
    cin >> nodes >> edges;

    // Create adjacency list (1-based indexing)
    vector<vector<int>> adj(nodes + 1);

    // Input edges
    cout << "Enter edges (u v):\n";
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        addEdge(adj, u, v);
    }
    // Print adjacency list
    printAdjList(adj, nodes);
    return 0;
}
