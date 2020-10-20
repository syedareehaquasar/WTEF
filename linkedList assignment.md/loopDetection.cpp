#include "LinkedList.h"
#include <iostream>
using namespace std;

bool LinkedList::detectLoop() {
    Node* fastPtr = head;
    Node* slowPtr = head;
    
    while (slowPtr && fastPtr -> nextElement) {
        slowPtr = slowPtr -> nextElement;
        fastPtr = fastPtr -> nextElement -> nextElement;
        if (slowPtr == fastPtr) {
            return true;
        }
    }
    return false;
}

int main() {
  LinkedList list;
  for (int i = 1; i <= 5; i++) {
    list.insertAtHead(i); // inserting value in the list
    list.printList();
  }

  list.insertLoop(); // generating a loop
  string listLoop = list.elements(); // printing list after creating loop
  cout << "List : " << listLoop << endl;
  bool checkLoop = list.detectLoop(); // calling detectLoop function
  cout << "Loop detected : " << checkLoop << endl;
  return 0;
}
