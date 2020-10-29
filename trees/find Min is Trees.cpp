#include "BST.h"

int findMin(Node * rootNode) {
    Node* currentNode = rootNode;
    while (currentNode) {
        if (currentNode -> leftChild) {
            currentNode = currentNode -> leftChild;
        }
        else {
            break;
        }
    }
    return currentNode -> value;
}

int main() {
  BinarySearchTree bsT(6);
  bsT.insertBST(3);
  bsT.insertBST(8);
  bsT.insertBST(12);
  bsT.insertBST(10);
  bsT.insertBST(14);
  bsT.insertBST(1);
  cout << findMin(bsT.getRoot()) << endl;
  return 0;
}
