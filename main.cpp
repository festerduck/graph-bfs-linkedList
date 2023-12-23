#include <iostream>
#include <queue>

#define VERTICES 15
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
      if(current->next != NULL)
        cout << current->location << ", ";
      else cout << current->location;
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
    throw -1;
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
    cout << array[source]->location << ", ";
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
/*
 * PIEAS = 0
 * Chirrah = 1
 * Thanda Pani = 2
 * Ali Pur = 3
 * Mohara = 4
 * Taramri = 5
 * Chatta Bakhtawar = 6
 * Kuri = 7
 * Chak Shahzad = 8
 * Bani Gala = 9
 * Bara Kahu = 10
 * Athal = 11
 * Malot = 12
 * Jagiot = 13
 * Pind Begwal = 14
 * */
int main()
{
  string locations[] = {
    "PIEAS",
    "Chirrah",
    "Thanda Pani",
    "Ali Pur",
    "Mohara",
    "Taramri",
    "Chatta Bakhtawar",
    "Kuri",
    "Chak Shahzad",
    "Bani Gala",
    "Bara Kahu",
    "Athal",
    "Malot",
    "Jagiot",
    "Pind Begwal"
  };
  Graph g1(VERTICES);
  for(int i = 0; i < VERTICES; i++){
   g1.addVertex(i, locations[i]);
  }
  g1.addEdge(0, 1);
  g1.addEdge(0, 2);
  g1.addEdge(0, 4);
  g1.addEdge(1, 0);
  g1.addEdge(2, 0);
  g1.addEdge(2, 3);
  g1.addEdge(3, 2);
  g1.addEdge(3, 5);
  g1.addEdge(3, 13);
  g1.addEdge(4, 0);
  g1.addEdge(4, 14);
  g1.addEdge(5, 3);
  g1.addEdge(5, 6);
  g1.addEdge(6, 7);
  g1.addEdge(6, 8);
  g1.addEdge(6, 5);
  g1.addEdge(7, 6);
  g1.addEdge(7, 8);
  g1.addEdge(7, 12);
  g1.addEdge(8, 6);
  g1.addEdge(8, 7);
  g1.addEdge(8, 9);
  g1.addEdge(9, 8);
  g1.addEdge(9, 10);
  g1.addEdge(10, 9);
  g1.addEdge(10, 11);
  g1.addEdge(11, 10);
  g1.addEdge(11, 12);
  g1.addEdge(11, 14);
  g1.addEdge(12, 11);
  g1.addEdge(12, 7);
  g1.addEdge(12, 13);
  g1.addEdge(13, 12);
  g1.addEdge(13, 3);
  g1.addEdge(13, 14);
  g1.addEdge(14, 13);
  g1.addEdge(14, 11);
  g1.addEdge(14, 4);
  g1.printGraph();
 for (int i = 0; i < VERTICES; i++) {
    cout << "BFS with source " << locations[i] << endl;
    g1.BFS(i);
    cout << endl;
  }
  return 0;
}
