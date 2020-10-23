#include <iostream>
#include "queue.h"
#include "stack.h"
using namespace std;

myQueue reverseK(myQueue queue, int k) {
    if (queue.isEmpty() or k <= 0) {
        return queue;
    }
    
    myStack carry(k);
    
    for (int i = 0; i < k; i++) {
        carry.push(queue.getFront());
        queue.dequeue();
    }
    
    for (int i = 0; i < k; i++) {
        queue.enqueue(carry.getTop());
        carry.pop();
    }
    
    for (int i = 0; i < queue.getSize() - k ; i++) { 
        int x = queue.getFront();
        queue.dequeue();
        queue.enqueue(x);  
    } 
    
    return queue;
}

int main(){
    myQueue mQ(10);
    
    mQ.enqueue(1);
    mQ.enqueue(2);
    mQ.enqueue(3);
    mQ.enqueue(4);
    mQ.enqueue(5);
    mQ.enqueue(6);
    mQ.enqueue(7);
    mQ.enqueue(8);
    mQ.enqueue(9);
    mQ.enqueue(10);
    
    mQ=reverseK(mQ, 5);
    
    mQ.showqueue(); //show queue prepended in the hidden code
    
    return 0;
}
