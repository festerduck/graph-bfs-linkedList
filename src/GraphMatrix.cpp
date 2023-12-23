#include "GraphMatrix.h"
#include <iomanip>

GraphMatrix::GraphMatrix(int vertices)
{
  V = vertices;
    rows = vertices;
    cols = vertices;
  matrix = new int*[rows];
  for (int i = 0; i < rows; i++) {
    matrix[i] = new int[cols];
  }
}

GraphMatrix::~GraphMatrix(){
  for(int i = 0; i < rows; i++)
  {
    delete[] matrix[i];
  }
  delete matrix;
}
void GraphMatrix::addEdge(int vertex, int edge)
{
  matrix[vertex][edge] = 1;
}
void GraphMatrix::BFS(int source, string locations[])
{
    queue<int> Q;
    bool* visited = new bool[V];
    for(int i = 0; i < V; i++)
    {
      visited[i] = false;
    }
    visited[source] = true;
    cout << "Source: " << locations[source] << " ";
    Q.push(source);
    while (!Q.empty()) {
      int currentIndex = Q.front();
      Q.pop();
      
      for(int i = 0; i < V; i++){
      if(matrix[currentIndex][i] == 1 && !visited[i]){
        Q.push(i);
        visited[i] = true;
        cout << locations[i] << " ";
      }
      }
    }
    delete [] visited;
}
void GraphMatrix::printGraph(string locations[])
{
    cout << setw(15) << " ";
    for (int i = 0; i < V; i++) {
        cout << setw(15) << locations[i];
    }
    cout << endl;

    for (int i = 0; i < V; i++) {
        cout << setw(15) << locations[i];
        for (int j = 0; j < V; j++) {
            cout << setw(15) << matrix[i][j];
        }
        cout << endl;
    }
}


