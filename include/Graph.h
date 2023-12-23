#pragma once
#include <iostream>
#include <queue>
#include <stack>
#include <stdexcept>
#include <string>
#include <iomanip>

using namespace std;
struct Node{
  int key;
  string location = "";
  Node* next;
  Node* head;
};

class Graph{
  public:
    Graph(int noOfVertices);
    Graph(const Graph* &other);
    ~Graph();
    void addVertex(int vertex, string location);
    void addEdge(int vertex, int edge);
    void BFS(int source);
    void BFS_Matrix(int source);
    void DFS(int source);
    void topologicalSort();
    void printGraph() const;
  private:
    int V; /*Number of Vertices inside the Graph*/
    Node** array; /*Array of head pointers for the Adjacency List*/
    void topologicalSort(int vertex, bool visited[], stack<int> &S);
};
