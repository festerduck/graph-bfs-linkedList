#pragma once
#include <iostream>

struct Node{
  int data;
  Node* next;
};

class List{
  public:
    List();
    List(const List& l1);
    ~List();
    
    bool empty() const;
    int headElement() const;

    void addHead(int newData);
    void delHead();

    int length() const;
    void print() const;
  private:
    Node* head;

};


