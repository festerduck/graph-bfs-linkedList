#include <iostream>
#include "include/List.h"
using namespace std; 

class Graph{
  public:
    Graph(int noOfVertices);
    Graph(const Graph* &other);
    ~Graph();

    void addEdge(int vertex, int edge);
    void BFS(int source);
    void printGraph() const;
  private:
    int V; /*Number of Vertices inside the Graph*/
    List* array; /*Array for the Adjacency List*/
};

Graph::Graph(int noOfVertices)
{
  V = noOfVertices;
  array = new List[V];
}
Graph::Graph(const Graph* &other){}

Graph::~Graph()
{
  delete[] array;
}
void Graph::printGraph() const{
  for(int i = 0; i < V; i++)
  {
    if (array[i].empty()) {
      cout << "No Adjacent List at vertex: " << i << endl;
    }
    else { 
      cout << "Adjacent Edges at vertex: " << i << endl;
      array[i].print();
    }
    
  }
}

void Graph::addEdge(int vertex, int edge)
{
  if(vertex >= 0 && vertex < V)
  {
    array[vertex].addHead(edge);
  }
  else {
    cout << "Vertex index is not valid" << endl;
  }
}


int main()
{
  cout << "Graph" << endl;
  Graph g1(5);
  g1.addEdge(0, 4);
  g1.addEdge(0, 3);
  g1.addEdge(1, 0);
  g1.addEdge(3, 0);
  g1.printGraph();
  return 0;
}
