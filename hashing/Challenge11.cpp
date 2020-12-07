#include "LinkedList.h"
#include <iostream>
#include "unordered_set"

using namespace std;

string LinkedList::Intersection( LinkedList list1, LinkedList list2) {
    string result = "";
    unordered_set<int> l1map;
    Node* current = list1.head;
    while (current) {
        l1map.insert(current -> data);
        current = current -> nextElement;
    }
    current = list2.head;
    while (current) {
        if (l1map.find(current -> data) != l1map.end())
        result = to_string(current -> data) + "->" + result;
        current = current -> nextElement;
    }
    return result + "null";
}

int main(){
    LinkedList list1, list2;
    int list1Size, list2Size;
    for (int i = 10; i < 40; i += 10) {
        list1.insertAtHead(i);
    }
    for (int i = 20; i < 40; i += 10) {
        list2.insertAtHead(i);
    }
    list2.insertAtHead(22);
    // cin >> list1Size;
    // while (list1Size--) {
    //     int ele;
    //     cin >> ele;
    //     list1.insertAtHead(ele);
    // }
    // cin >> list2Size;
    // while (list2Size--) {
    //     int ele;
    //     cin >> ele;
    //     list2.insertAtHead(ele);
    // }
    cout << list1.Intersection(list1, list2);
    return 0;
}