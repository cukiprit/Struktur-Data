#include <iostream>
using namespace std;

class Node {
  public:
    string kode_MK;
    string nama_MK;
    int sks;
  Node *next;
  Node *prev;
};

Node* head = NULL;

void insertNode(string new_kodeMK, string new_namaMK, int new_sks){
  Node *new_node = (Node*) malloc(sizeof(Node));
  new_node -> kode_MK = new_kodeMK;
  new_node -> nama_MK = new_namaMK;
  new_node -> sks = new_sks;
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
    cout << n -> kode_MK << "\n";
    cout << n -> nama_MK << "\n";
    cout << n -> sks << "\n\n";
    n = n -> next;
  }
}

int main(){
  insertNode("TI01", "Algoritma", 2);
  
  cout << "Data yang telah dimasukkan\n";
  displayNode();
  return 0;
}
