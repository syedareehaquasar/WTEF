#include "LinkedList.h"

int LinkedList::length() {
    Node* presentNode = head;
    int numberOfElements = 0;
    while(presentNode != NULL){
        numberOfElements++;
        presentNode = presentNode -> nextElement;
    }
    return numberOfElements;
}

int main() {
  LinkedList list; // created linked list
  for (int i = 1; i <= 8; i++) {
    list.insertAtHead(i); // inserting data in list
    list.printList();
  }
  int listLength = list.length(); // calling length function
  cout << "Length of the list is " << listLength << "!" << endl;
  return 0;
}
