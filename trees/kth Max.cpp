#include "ArrayList.h"
#include "BST.h"


void inOrderTraversal(Node* rootNode, ArrayList* inorderTree){
    if (rootNode == NULL) {
        return;
    }
    inOrderTraversal(rootNode -> leftChild, inorderTree);
    inorderTree -> insert(rootNode -> value);
    inOrderTraversal(rootNode -> rightChild, inorderTree);
}

int findKthMax(Node* rootNode, int k, int nodes){
    if (!rootNode || nodes < k) {
        return -1; 
    }
    ArrayList* inorderTreeList = new ArrayList(nodes);
    inOrderTraversal(rootNode, inorderTreeList);
    int n = inorderTreeList -> length();
    return inorderTreeList -> getAt(n - k - 1);
}

int main(){
  BinarySearchTree bsT(6);
        bsT.insertBST(4);
        bsT.insertBST(9);
        bsT.insertBST(5);
        bsT.insertBST(2);
        bsT.insertBST(8);
  
  cout << findKthMax(bsT.getRoot(), 3, 6) << endl;
}
