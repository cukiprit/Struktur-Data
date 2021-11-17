#include <iostream>
#include <cstdlib>
using namespace std;

class Node {
  public:
    int val;
  Node *next;
};

Node *head = NULL;

void insertNode(int new_val){
  Node *new_node = (Node*) new float(sizeof(Node));
  new_node -> val = new_val;
  new_node -> next = head;
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
  insertNode(20);
  insertNode(12);
  insertNode(57);
  insertNode(23);
  insertNode(18);
  cout << "Data yang telah dimasukkan\n";
  displayNode();

  return 0;
}
