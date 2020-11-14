#include "BST.h"
#include <string>
#include <queue>

//Helper recursive function to traverse tree and append all the nodes
// at k distance into result string
void findK(Node* root, int k, string* result) {
    if (root == NULL) {
        return;
    }
    queue<Node*> levelOrderQueue;
    levelOrderQueue.push(root);
    int distanceFromRoot = 0;
    while (!levelOrderQueue.empty() && distanceFromRoot <= k) {
        int levelSize = levelOrderQueue.size();
        for (int i = 0; i < levelSize; i++) {
            Node* currentNode = levelOrderQueue.front();
            levelOrderQueue.pop();
            if (currentNode -> leftChild != nullptr) {
                levelOrderQueue.push(currentNode -> leftChild);
            }
            if (currentNode -> rightChild != nullptr) {
                levelOrderQueue.push(currentNode -> rightChild);
            }
            if (distanceFromRoot == k) {
                *result += to_string(currentNode -> value) + " ";
            }
        }
        distanceFromRoot++;
    }
    return;
}

string findKNodes(Node* root, int k) {
    string* result = new string("");
    findK(root, k, result);
    return *result;
}


int main() {
    BinarySearchTree BST(6);
    BST.insertBST(4);
    BST.insertBST(9);
    BST.insertBST(5);
    BST.insertBST(2);
    BST.insertBST(8);
    BST.insertBST(12);

    cout << findKNodes(BST.getRoot(),2) << endl;

}
