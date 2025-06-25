#include <iostream>
#include <vector>
using namespace std;

// Function to create the graph
void createAdjList(vector<int> adjList[], int edges) {
   cout << "Enter " << edges << " edges (u v):" << endl;
   for (int i = 0; i < edges; i++) {
      int u, v;
      cin >> u >> v;

      // Undirected graph
      adjList[u].push_back(v);
      adjList[v].push_back(u);

      // For directed graph, comment out: adjList[v].push_back(u);
   }
}

// Function to print the graph
void printAdjList(vector<int> adjList[], int nodes) {
   cout << "\nAdjacency List:" << endl;
   for (int i = 0; i < nodes; i++) {
      cout << i << ": ";
      for (int neighbor : adjList[i]) {
         cout << neighbor << " ";
      }
      cout << endl;
   }
}

int main() {
   int nodes, edges;
   cout << "Enter number of nodes: ";
   cin >> nodes;
   
   cout << "Enter number of nodes and edges: ";
   cin >>edges;


   // Declare adjacency list
   vector<int> adjList[nodes];

   // Function calls
   createAdjList(adjList, edges);
   printAdjList(adjList, nodes);

   return 0;
}
