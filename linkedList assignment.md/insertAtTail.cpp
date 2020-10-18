#include "LinkedList.h"
#include <iostream>
using namespace std;

//Inserts a value at the end of the list
void LinkedList::insertAtTail(int value) {
  Node* hold = new Node;
  hold -> data = value;
  hold -> nextElement = NULL;
  
  if (!head) {
      head = hold;
      return;
  }
  else {
      Node* findLast = head;
      while (findLast -> nextElement) {
          findLast = findLast -> nextElement;
      }
      findLast -> nextElement = hold;
  }
}

int main() {
  LinkedList list;
  srand(time(NULL)); // seed to produce random numbers everytime
  int num = 0;
  for (int i = 1; i < 6; i++) {
    num = rand() % 10 + 1; //generating random numbers in range 1 to 10
    list.insertAtTail(num); // inserting value at the tail of the list
    list.printList();
  }
}
