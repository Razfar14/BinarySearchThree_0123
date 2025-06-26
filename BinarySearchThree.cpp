#include <iostream>
using namespace std;

class Node{
    public: 
    int info;
    Node* leftChild;
    Node* rightChild;

    //Constructor for the node class
    Node(){
        leftChild = nullptr;// Initialize left child to null0
        rightChild = nullptr;// Initialize right child to null
    }
};

class BinaryThree{
    public:
    Node* ROOT;

    BinaryThree(){
        ROOT = nullptr; // Initialize the root to null
    }

  void search(int element, Node *&parent, Node *&currentNode){
    currentNode = ROOT;
    parent = nullptr;

    while ((currentNode != nullptr) && (currentNode->info != element)) {
        parent = currentNode;
        if (element < currentNode->info) {
            currentNode = currentNode->leftChild;
        } else {
            currentNode = currentNode->rightChild;
        }
    }
}
  


