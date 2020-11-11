#include "BST.h"

int findHeight(Node * rootNode) {
    if (!rootNode) {
        return -1;
    }
	return max(findHeight(rootNode -> leftChild), findHeight(rootNode -> rightChild)) + 1;
}

int main() {
    BinarySearchTree BST(6);
        BST.insertBST(4);
        BST.insertBST(9);
        BST.insertBST(5);
        BST.insertBST(2);
        BST.insertBST(8);
        BST.insertBST(12);
    cout <<  findHeight(BST.getRoot()) << endl;
}
