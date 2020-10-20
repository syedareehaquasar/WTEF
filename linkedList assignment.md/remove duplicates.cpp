#include "LinkedList.h"
#include <iostream>
#include <string> 
using namespace std;

string LinkedList::removeDuplicates() {
    if (!head) {
        return "no list present";
    }
    Node* mainPtr = head;
    Node* refPtr = head;
    string output = "";
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
    mainPtr = head;
    while (mainPtr) {
      output += to_string(mainPtr -> data);
      output += "->";
      mainPtr = mainPtr -> nextElement;
    }
    output += "null";
    return output;
}

int main(){
     LinkedList list;
    for(int i = 1; i<4 ; i++) {
        list.insertAtHead(i); // inserting value in the list
        list.printList();
    }
    list.insertAtHead(2);
    list.printList();  //after adding more elements
    list.insertAtHead(4);
    list.printList();  //after adding more elements
    list.insertAtHead(1);
    list.printList();  //after adding more elements
    
    string removeDuplicate = list.removeDuplicates(); // calling removeDuplicates function
    cout << "List after deleting duplicates from list :" << removeDuplicate <<endl;
    return 0;
}
