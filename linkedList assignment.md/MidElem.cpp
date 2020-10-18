#include "LinkedList.h"
#include <iostream>
using namespace std;

int LinkedList::findMid() {
    Node* presentNode = head;
    int totalElem = 0, midpos;
    while(presentNode) {
        totalElem++;
        presentNode = presentNode -> nextElement;
    }
    if (totalElem % 2 == 0) {
        midpos = totalElem/2;
    }
    else {
        midpos = (totalElem/2) + 1;
    }
    presentNode = head;
    int pointer = 1;
    while(presentNode != NULL) {
        if (pointer == midpos) {
            return presentNode -> data;
        }
        pointer++;
        presentNode = presentNode -> nextElement;
    }
    return 0;
}

int main(){
    LinkedList list;
    srand (time(NULL));   // seed to produce random numbers everytime
    int num = 0;
    for(int i = 1; i<=5 ; i++) {
        num = rand() % 10 + 1;    //generating random numbers in range 1 to 100
        list.insertAtHead(num);    // inserting value in the list
        list.printList();
    }
    
    int mid = list.findMid();    //calling findMid function
    cout << "Middle element of the list : " << mid << endl;
  return 0;
}
