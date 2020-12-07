#include "LinkedList.h"
#include <iostream>
#include "unordered_set"

using namespace std;

string LinkedList::removeDuplicates() {
    string result = "";
    unordered_set<int> traversed;
    Node* current = head;
    Node* prev = NULL;
    while (current) {
        if (traversed.find(current -> data) != traversed.end()) {
            prev -> nextElement = current -> nextElement;
            delete(current);
        }
        else {
            traversed.insert(current -> data);
            result += to_string(current -> data) + "->";
            prev = current;
        }
        current = prev -> nextElement;
    }
    return result + "null";
}

int main(){
    int insertions;
    cin >> insertions;
    LinkedList list;
    for (int i = 1; i < 8; i++) {
        list.insertAtHead(i);
        list.printList();
    }
    list.insertAtHead(2);
    list.printList();
    list.insertAtHead(4);
    list.printList();
    list.insertAtHead(1);
    list.printList();
    cout << list.removeDuplicates();
    return 0;
}
