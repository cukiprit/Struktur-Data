#include <iostream>
using namespace std;

class Node {
  public:
    string nama;
    int umur;
  Node *next;
};

Node *head = NULL;

void insertNode(string new_nama, int new_umur){
  Node *new_node = (Node*) malloc(sizeof(Node));
  new_node -> nama = new_nama;
  new_node -> umur = new_umur;
  new_node -> next = head;
  head = new_node;
}

void displayNode(){
  Node *n;
  n = head;
  while(n != NULL){
    cout << "Nama : " << n -> nama << "\n";
    cout << "umur : "<< n -> umur << "\n\n";
    n = n -> next;
  }
}

int main(){
  string nama;
  int umur;
  bool condition = true;

  insertNode("Supri", 20);
  cout << "Data yang telah dimasukkan\n";
  displayNode();

  return 0;
}
