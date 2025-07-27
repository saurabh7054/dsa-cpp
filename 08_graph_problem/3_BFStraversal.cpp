#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(int start, vector<int> adj[], vector<bool> &visited) {
    queue<int> q;                          // Create a queue for BFS
    q.push(start);                         // Push starting node into the queue
    visited[start] = true;                 // Mark starting node as visited

    while (!q.empty()) {                   // Run loop till queue is not empty
        int node = q.front();              // Get front node from queue
        q.pop();                           // Remove front node from queue
        cout << node << " ";               // Print (process) the current node

        for (int neighbor : adj[node]) {   // Loop through all neighbors of node
            if (!visited[neighbor]) {      // If neighbor is not visited
                q.push(neighbor);          // Add neighbor to queue
                visited[neighbor] = true;  // Mark neighbor as visited
            }
        }
    }
}

int main() {
    int V = 5;
    vector<int> adj[V];
    // Graph edges
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(0);
    adj[1].push_back(3);
    adj[2].push_back(0);
    adj[3].push_back(1);
    adj[3].push_back(4);
    adj[4].push_back(3);

    vector<bool> visited(V, false);
    cout << "BFS Traversal: ";
    bfs(0, adj, visited); // BFS starting from node 0

    return 0;
}
