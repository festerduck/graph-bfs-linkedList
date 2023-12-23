#pragma once
#include <iostream>
#include <queue>
#include <stack>
#include <stdexcept>
#include <string>
#include <iomanip>
using namespace std;
class GraphMatrix{
  public:
    GraphMatrix(int vertices);
    ~GraphMatrix();
    void addEdge(int vertex, int edge);
    void BFS(int source, std::string locations[]);
    void printGraph(string locations[]);
  private:
    int V;
    int rows;
    int cols;
    int ** matrix;
};


