#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<vector<int>> &matrix, int u, int v) {
    matrix[u][v] = 1;
    matrix[v][u] = 1; 
}
void printAdjMatrix(const vector<vector<int>> &matrix, int nodes) {
    cout << "\nAdjacency Matrix:\n";
    for (int i = 1; i <= nodes; i++) {
        for (int j = 1; j <= nodes; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int nodes, edges;
    cout << "Enter number of nodes and edges: ";
    cin >> nodes >> edges;

    // Create adjacency matrix (1-based indexing)
    vector<vector<int>> matrix(nodes + 1, vector<int>(nodes + 1, 0));

    // Input edges
    cout << "Enter edges (u v):\n";
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        addEdge(matrix, u, v);
    }

    // Print adjacency matrix
    printAdjMatrix(matrix, nodes);

    return 0;
}
