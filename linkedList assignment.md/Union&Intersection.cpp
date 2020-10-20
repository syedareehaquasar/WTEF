#include "LinkedList.h"
#include <iostream>
#include <string>
using namespace std;

string LinkedList::Union(LinkedList list1, LinkedList list2) {
  Node* mainPtr = list1.head;
  string output = "";
  
  while (mainPtr -> nextElement) {
      mainPtr = mainPtr -> nextElement;
  }
  mainPtr -> nextElement = list2.head;
  
  mainPtr = list1.head;
  Node* refPtr = list1.head;
  
  while (mainPtr -> nextElement) {
    refPtr = mainPtr;
    while (refPtr -> nextElement) {
        if (refPtr -> nextElement -> data == mainPtr -> data) {
            refPtr -> nextElement = refPtr -> nextElement -> nextElement;
        }
        else {
            refPtr = refPtr -> nextElement;
        }
    }
    mainPtr = mainPtr -> nextElement;
  }
  
  mainPtr = list1.head;
  while (mainPtr) {
      output += to_string(mainPtr -> data);
      output += "->";
      mainPtr = mainPtr -> nextElement;
  }
  
  output += "null";
  return output;
}

string LinkedList::Intersection(LinkedList list1, LinkedList list2) {
  Node* l1 = list1.head;
  string output = "";
  
  while (l1) {
      Node* l2 = list2.head;
      while (l2) {
          if (l1 -> data == l2 -> data) {
            output += to_string(l1 -> data);
            output += "->";
            break;
          }
          else {
            l2 = l2 -> nextElement;
          }
      }
      l1 = l1 -> nextElement;
  }
  
  output += "null";
  return output;
}

int main() {
  LinkedList list, list1;  // creating lists
  int rand_num = rand() % 5 + 1; 
  srand (time(NULL));

  cout << "List 1 " << endl;
  for(int i = 1; i<5 ; i++) {
    rand_num = rand() % 5 + 1;
    list.insertAtHead(rand_num);    // inserting value in the list
  }
  list.printList();

  cout << "List 2 " << endl;
  for(int i = 4; i<8 ; i++) {
    rand_num = rand() % 5 + 1;
    list1.insertAtHead(rand_num);    // inserting value in the list   
  }
  list1.printList();
  
  string check1 = list.Intersection(list , list1);  // calling intersection function
  cout << "Intersection List : "<< check1 << endl;
  
  string check = list.Union(list , list1);  // calling union function
  cout << "Union List : "<< check << endl;
  
  return 0;
}
