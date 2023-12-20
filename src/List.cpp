#include "List.h"
using namespace std;

List::List(){
  head = NULL;
}
List::List(const List& l1){
  head = NULL;
  Node* otherCurrent = l1.head;
  while (otherCurrent != NULL) {
    Node* newNode = new Node;
    newNode->data = otherCurrent->data;
    newNode->next = NULL;
    if(head == NULL)
    {
      head = newNode;
    }
    else {
      Node* current = head;
      while(current->next != NULL){
        current = current->next;
      }
      current->next = newNode;
    }
    otherCurrent = otherCurrent->next;
  }
}

List::~List(){
  Node* current = head;
  while(current != NULL)
  {
    Node* temp = current;
    current = current->next;
    delete temp;
  }
}
bool List::empty() const{
  return head == NULL;
}

int List::headElement() const{
  return head->data;
}

void List::addHead(int newData){
  Node* newNode = new Node;
  newNode->data = newData;
  newNode->next = head;
  head = newNode;
}

void List::delHead(){
  Node* oldHead;
  oldHead = head;
  head = head->next;
  delete oldHead;
}

int List::length() const
{
  Node* current = head;
  int counter = 0;
  while (current !=NULL) {
    counter++;
    current = current->next;
  }
  return counter;
}

void List::print() const
{
  Node* current = head;
  while (current != NULL) {
    cout << current->data << endl; 
    current = current->next;
  }
}
