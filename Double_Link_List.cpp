#include <iostream>
using namespace std;

class Node {
  public:
    int val;
  Node *next;
  Node *prev;
};

Node* head = NULL;

void insertNode(int new_val){
  Node *new_node = (Node*) new float(sizeof(Node));
  new_node -> val = new_val;
  new_node -> prev = NULL;
  new_node -> next = head;

  if(head != NULL){
    head -> prev = new_node;
  }
  head = new_node;
}

void displayNode(){
  Node *n;
  n = head;
  while(n != NULL){
    cout << n -> val << " ";
    n = n -> next;
  }
}

int main(){
  insertNode(2);
  insertNode(17);
  insertNode(91);
  insertNode(35);
  insertNode(40);

  cout << "Data yang telah dimasukkan\n";
  displayNode();
  return 0;
}
