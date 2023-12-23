#include <iostream>
#include <queue>
#include <stack>
#include <stdexcept>
#include <string>
#include <iomanip>
#include "Graph.h"
#include "GraphMatrix.h"
#include "include/Graph.h"

using namespace std; 

#define VERTICES 15
std::string locations[] = {
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


/*
 *   0 2 3 5 6 7 8 9 10 11 12 13 14 4 1 
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


  //Undirected Graph using Graph
  GraphMatrix g1(VERTICES); 
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
  cout << "****************************************************" << endl;
  cout << "Matrix Representation of the Graph" << endl;
  g1.printGraph(locations);
  cout << "****************************************************" << endl;
  cout << "BFS Traversal to print cities PIEAS is linked by road." << endl;
  g1.BFS(0, locations);
  cout << endl;
  Graph g2(VERTICES);
  for(int i = 0; i < VERTICES; i++){
   g2.addVertex(i, locations[i]);
  }
  g2.addEdge(0, 1);
  g2.addEdge(0, 2);
  g2.addEdge(0, 4);
  g2.addEdge(2, 3);
  g2.addEdge(3, 5);
  g2.addEdge(3, 13);
  g2.addEdge(5, 6);
  g2.addEdge(6, 7);
  g2.addEdge(6, 8);
  g2.addEdge(7, 12);
  g2.addEdge(12, 11);
  g2.addEdge(11, 10);
  g2.addEdge(10, 9);
  g2.addEdge(8, 9);
  g2.addEdge(13, 12);
  g2.addEdge(13, 14);
  g2.addEdge(14, 11);
  g2.addEdge(4, 14);
  cout << "****************************************************" << endl;
  cout << "TopologicalSort of the Graph" << endl;
  g2.topologicalSort();
  cout << endl;
  return 0;
}
