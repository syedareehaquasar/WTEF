#include "BST.h"

string findAncestors(Node *rootNode, int k) {
    if (rootNode == NULL) {
        return "No Root";
    }
    string result = "";
    Node* currentNode = rootNode;
    while (currentNode -> value != k || currentNode != NULL) {
        result = to_string(currentNode -> value) + ", " + result;
        if (currentNode -> value < k) {
            currentNode = currentNode -> leftChild;
        }
        else {
            currentNode = currentNode -> rightChild;
        }
    }
    return result;
}

int main()
{
  BinarySearchTree BST(6);
  BST.insertBST(1);
  BST.insertBST(133);
  BST.insertBST(12);
    
  cout << findAncestors(BST.getRoot(),12) << endl;
}
