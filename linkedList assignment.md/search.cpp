#include "LinkedList.h"
#include <iostream>
using namespace std;

// function to check if element exists in the list
bool LinkedList::search(int value) {
    Node* finder = head;
    while (finder) {
        if (finder -> data == value) {
            return true;
        }
        finder = finder -> nextElement;
    }
    return false;
}

int main() {
  LinkedList list;
  srand(time(NULL)); // seed to produce random numbers everytime
  int num = 0;
  for (int i = 1; i < 6; i++) {
    num = rand() % 10 + 1; //generating random numbers in range 1 to 10
    list.insertAtTail(num); // inserting value in the list
    list.printList();
  }
  bool exist = false; // exist it true only if element exists
  for (int j = 0; j < 5; j++) {
    num = rand() % 10 + 1;
    exist = list.search(num); // Calling search function
    if (exist) { // only true if element exists
      cout << num << " exists!" << endl;
    } else {
      cout << num << " does not exist!" << endl;
    }
  }
}
