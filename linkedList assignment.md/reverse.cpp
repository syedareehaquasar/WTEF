#include "LinkedList.h"
#include <iostream>
#include <string>
using namespace std;

string LinkedList::reverse() {
    Node* presentNode = head;
    Node* prev = NULL;
    Node* next = NULL;
    
    while (presentNode) {
        next = presentNode -> nextElement;
        presentNode -> nextElement = prev;
        prev = presentNode;
        presentNode = next;
    }
    head = prev;
    
    string output = "";
    presentNode = head;
    while (presentNode) {
        output += to_string(presentNode -> data);
        output += "->";
        presentNode = presentNode -> nextElement;
    }
    output += "null";
    return output;
}

int main() {
  LinkedList list; //creating list
  for (int j = 1; j <= 7; j++) {
    list.insertAtHead(j); //insertng data in list
    list.printList();
  }

  string reversed = list.reverse(); // calling reverse function of list
  cout << "List after reverse function : " << reversed << endl;
  return 0;
}
