#include "BST.h"

int findHeight(Node * rootNode) {
    if (!rootNode) {
        return -1;
    }
    int leftHeight = findHeight(rootNode -> leftChild);
	int rightHeight = findHeight(rootNode -> rightChild);
	return max(leftHeight, rightHeight) + 1;
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
