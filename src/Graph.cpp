#include "Graph.h"

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
    throw std::out_of_range("Vertex index is not valid");;
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
  delete [] visited;

}


void Graph::DFS(int source)
{
  bool* visited = new bool[V];
  for(int i = 0; i < V; i++)
    visited[i] = false;
///*Since I am using linked list so I have to modify this code according to that*/
  stack<int> S;
  visited[source] = true;
  cout << array[source]->location << " is connected with: ";
  S.push(source);
  while (!S.empty()) {
    source = S.top();
    cout << array[source]->location << ", ";
    S.pop();
    Node* current = array[source]->head;
    while (current != NULL) {
      if(!visited[current->key]){
        visited[current->key] = true;
        S.push(current->key);
      }
      current = current->next;
    }
  }
  delete [] visited;
}
void Graph::topologicalSort()
{
  stack<int> S;
  bool* visited = new bool[V];
  for(int i = 0; i < V; i++)
    visited[i] = false;
  for (int i = 0; i < V; i++) {
    if(visited[i] == false)
      topologicalSort(i, visited, S);
  }
  while(!S.empty())
  {
    cout << array[S.top()]->location << " ";
    S.pop();
  }
  delete [] visited;
}
void Graph::topologicalSort(int vertex, bool visited[], stack<int> &S){
  visited[vertex] = true;

  Node* current = array[vertex]->head;
  while (current != NULL) {
      if (!visited[current->key]) 
        topologicalSort(current->key, visited, S); 
      current = current->next;
    }

  S.push(vertex);
}
