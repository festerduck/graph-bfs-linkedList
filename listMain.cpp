#include <iostream>
#include "List.h"

using namespace std;

int main(){
  List l1;
  l1.addHead(4);
  l1.addHead(5);
  l1.addHead(10);
  for(int i = 0; i < 100; i++){
    l1.addHead(rand()%1001);
  }
  l1.print();
  List l2(l1);
  l2.print();
  return 0;
}
