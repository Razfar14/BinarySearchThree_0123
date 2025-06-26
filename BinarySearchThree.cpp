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



