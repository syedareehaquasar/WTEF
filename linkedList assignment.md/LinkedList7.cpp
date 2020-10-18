#include <iostream>
using namespace std;

int LinkedList::findMid() {
    Node* presentNode = head;
    int numberOfElements = 0;
    while(presentNode != NULL){
        numberOfElements++;
        presentNode = presentNode -> nextElement;
    }
    
    int index = 0;
    if(numberOfElements % 2 == 0){
        index = numberOfElements / 2;
    }
    else {
        index = (numberOfElements / 2) + 1;
    }
    presentNode = head;
    int linker = 1;
    while (presentNode != NULL){
        if(linker == index){
            return presentNode -> data;
        }
        linker++;
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
