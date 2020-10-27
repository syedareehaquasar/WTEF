#include "stack.h"

class newQueue {
    private:
        int size;
        myStack* stackQ;
        myStack* temp;
        
    public:
        newQueue(int n) {
            size = n;
            stackQ = new myStack(n);
            temp = new myStack(n);
        }
        
        void enQueue(int value) {
            while (!stackQ -> isEmpty()) { 
                temp -> push(stackQ -> getTop()); 
                stackQ -> pop(); 
            } 
  
            stackQ -> push(value); 

            while (!temp -> isEmpty()) { 
                stackQ -> push(temp -> getTop()); 
                temp -> pop(); 
            } 
        }
        
        int deQueue() {
            if (stackQ -> isEmpty()) {
                return -1;
            }
            int x = stackQ -> getTop();
            stackQ -> pop();
            return x;
        }
};

int main(){
    newQueue queue(5);
    
    queue.enQueue(1);
    queue.enQueue(2);
    queue.enQueue(3);
    queue.enQueue(4);
    queue.enQueue(5);
  
    cout << queue.deQueue() << endl;
    cout << queue.deQueue() << endl;
    cout << queue.deQueue() << endl;
    cout << queue.deQueue() << endl;
    cout << queue.deQueue() << endl;
    cout << queue.deQueue() << endl;
    return 0;
}
