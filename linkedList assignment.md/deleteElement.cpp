#include "LinkedList.h"
#include <iostream>

bool LinkedList::Delete(int value) {
    Node* presentNode = head;
    if (presentNode -> data == value) {
        head = presentNode -> nextElement;
    }
    while (presentNode -> nextElement != NULL) {
        Node* nextNode = presentNode -> nextElement; 
        if (nextNode -> data == value) {
            presentNode -> nextElement = nextNode -> nextElement;
            return true;
        }
        presentNode = presentNode -> nextElement;
    }
    return false;
} //end of delete()

int main() {

  LinkedList list;
  for (int i = 1; i <= 5; i++) {
    list.insertAtTail(i); // inserting value in list
    list.printList();
  }

  list.Delete(1); //calling delete function to delete 1
  list.printList();

  list.Delete(5); //calling delete function to delete 10
  list.printList();

  list.Delete(3); //calling delete function to delete 3
  list.printList();
  return 0;
}
