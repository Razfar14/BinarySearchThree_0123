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
  
    void insert(){
        int x;
        cout << "Masukkan Nilai : ";
        cin >> x;

        //step 1: Allocate memory for the new node
        Node* newNode = new Node();

        //step 2: Assign the value to the new node
        newNode->info = x;

        //step 3: Make the left and right child of the new node null
        newNode->leftChild = nullptr;
        newNode->rightChild = nullptr;

        //step 4: Locate the node which will be the parent of the node to be inserted
        Node* parent = nullptr;
        Node* currentNode = nullptr;
        search(x, parent, currentNode);

        //step 5: if parent is null(three is empty)
        if (parent == nullptr){

            //5a: markthe new node as root
            ROOT = newNode;

            //5b: return from the function
            return;
        }

        //step 6: if the value in the data field of the new node is less than the parent 
        if (x < parent->info){
            //6a: make the left child of the parent point to the new node
            parent->leftChild = newNode;

            //6b: return from the function
            return;
        } 

        //step 7: if the value in the data field of the new node is greater than that of the parent
        else if(x > parent->info){
            //7a: make the right child of the parent point to the new node
            parent->rightChild = newNode;

            //7b: return from the function
            return;
        }
     } 
     bool isEmpty(){
        //This function checks if the binary tree is empty
        return ROOT == nullptr; // Return true if root is null, false otherwise
     }
     
     void inorder(Node* ptr){
        if(isEmpty()){
            cout << "tree is empty." << endl;
            return; // If the tree is empty, return
        }
        if(ptr == nullptr){
            return; // If the current node is null, return
        }

        inorder(ptr->leftChild); // Traverse the left subtree
        cout << ptr->info << " "; // Visit the current node
        inorder(ptr->rightChild); // Traverse the right subtree
     }
    
     void preorder(Node* ptr){
        if(isEmpty()){
            cout << "tree is empty." << endl;
            return; // If the tree is empty, return
        }
        if(ptr == nullptr){
            return; // If the current node is null, return
        }

        cout << ptr->info << " "; // Visit the current node
        preorder(ptr->leftChild); // Traverse the left subtree  
        preorder(ptr->rightChild); // Traverse the right subtree
    }

        void postorder(Node* ptr){
            if(isEmpty()){
                cout << "tree is empty." << endl;
                return; // If the tree is empty, return
            }
            if(ptr == nullptr){
                return; // If the current node is null, return
            }
    
            postorder(ptr->leftChild); // Traverse the left subtree
            postorder(ptr->rightChild); // Traverse the right subtree
            cout << ptr->info << " "; // Visit the current node
    }   
};



