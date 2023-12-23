#include <iostream>
#include <queue>
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
    void printGraph() const;
  private:
    int V; /*Number of Vertices inside the Graph*/
    Node** array; /*Array of head pointers for the Adjacency List*/
};

Graph::Graph(int noOfVertices)
{
  V = noOfVertices;
  array = new Node*[V];
  for (int i = 0; i < V; i++) {
    array[i] = new Node;
    array[i]->next = NULL;
    array[i]->head = NULL;
  }
}
Graph::Graph(const Graph* &other){}

Graph::~Graph()
{
  delete[] array;
}

void Graph::addVertex(int vertex, string location){
  array[vertex]->key = vertex;
  array[vertex]->location = location;
  array[vertex]->head = NULL;
}
void Graph::printGraph() const{
  for(int i = 0; i < V; i++){
    cout << "Current Vertex: ";
    cout << array[i]->location << endl;
    if (array[i]->head == NULL) {
      cout << "No edges for this vertex";
    }
    Node* current = array[i]->head;
    while (current != NULL) {
      cout << current->location << " ";
      current = current->next;
    }
    cout << endl;
  }
 }

void Graph::addEdge(int vertex, int edge)
{
  if(vertex >= 0 && vertex < V && edge >= 0 && edge < V)
  {
    Node* newNode = new Node;
    newNode->key = edge;
    newNode->location = array[edge]->location;
    newNode->next = array[vertex]->head;
    array[vertex]->head = newNode;
  }
  else {
    cout << "Vertex index is not valid" << endl;
  }
}

void Graph::BFS(int source)
{
  bool* visited = new bool[V];
  for(int i = 0; i < V; i++)
    visited[i] = false;
///*Since I am using linked list so I have to modify this code according to that*/
  queue<int> Q;
  visited[source] = true;
  cout << array[source]->location << " is connected with: ";
  Q.push(source);
  while (!Q.empty()) {
    source = Q.front();
    cout << array[source]->location << " ";
    Q.pop();
    Node* current = array[source]->head;
    while (current != NULL) {
      if(!visited[current->key]){
        visited[current->key] = true;
        Q.push(current->key);
      }
      current = current->next;
    }
  }

}

int main()
{
  string locations[] = {"Pieas", "LakeView", "Thanda Paani", "Nilore", "Chirrah"};
  cout << "Graph" << endl;
  Graph g1(5);
  for(int i = 0; i < 5; i++){
   g1.addVertex(i, locations[i]);
  }
  g1.addEdge(0, 1);
  g1.addEdge(0, 4);
  g1.addEdge(0, 3);
  g1.addEdge(1, 2);
  g1.addEdge(3, 0);
  g1.addEdge(3, 4);
  g1.addEdge(4, 0);
  g1.addEdge(4, 3);
  g1.printGraph();
  Graph g(5);
  for (int i = 0; i < 5; i++) {
    g.addVertex(i, locations[i]);
  }
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 for (int i = 0; i < 4; i++) {
    cout << "BFS with source " << i << endl;
    g.BFS(i);
    cout << endl;
  }
  return 0;
}
