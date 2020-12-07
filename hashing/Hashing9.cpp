#include "LinkedList.h"
#include <iostream>
#include "unordered_set"

using namespace std;

string LinkedList::Union( LinkedList list1, LinkedList list2) {
    string result = "";
    unordered_set<int> traversed;
    Node* current = list1.head;
    while (current -> nextElement) {
        current = current -> nextElement;
    }
    current -> nextElement = list2.head;
    current = list1.head;
    while (current) {
        if (traversed.find(current -> data) == traversed.end()) {
            traversed.insert(current -> data);
            result = to_string(current -> data) + "->" + result;
        }
        current = current -> nextElement;
    }
    return result + "null";
}

int main(){
    LinkedList list1, list2;
    // list1.insertAtHead(10);
    // list1.insertAtHead(20);
    // list1.insertAtHead(80);
    // list1.insertAtHead(20);
    // list1.insertAtHead(60);
    // list2.insertAtHead(10);
    // list2.insertAtHead(20);
    // list2.insertAtHead(80);
    // list2.insertAtHead(60);
    // list2.insertAtHead(15);
    // list2.insertAtHead(30);
    // list2.insertAtHead(45);
    int list1Size, list2Size;
    cin >> list1Size;
    while (list1Size--) {
        int ele;
        cin >> ele;
        list1.insertAtHead(ele);
    }
    cin >> list2Size;
    while (list2Size--) {
        int ele;
        cin >> ele;
        list2.insertAtHead(ele);
    }
    cout << list1.Union(list1, list2);
    return 0;
}