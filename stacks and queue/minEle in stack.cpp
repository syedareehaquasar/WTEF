#include "stack.h"
#include <iostream>
using namespace std;

class newStack {
    private:
        myStack* stack;
        int minele = INT8_MIN;
        int size;
        myStack* temp;
        
    public:
        newStack (int n) {
            size = n;
            stack = new myStack(n);
            temp = new myStack(n);
        }
        
        int min() {
            if (stack -> isEmpty()) {
                return -1;
            }
            return minele;
        }
        
        void pop() { 
            if (stack -> isEmpty()) { 
                cout << "Stack is empty\n"; 
                return; 
            } 
            int top = stack -> getTop();
  
            if (top < minele) { 
                minele = 2 * minele - top;
            } 
            stack -> pop(); 
        } 
  
        void push(int value) { 
            if (stack -> isEmpty()) { 
                stack -> push(value); 
                minele = value; 
            } 
            else if (value > minele) 
            { 
                stack -> push(value);
            } 
            else {
                stack -> push(2 * value - minele);
                minele = value;
            }
        }
    };

int main(){
    newStack stack(6);
    stack.push(5);
    stack.push(2);
    stack.push(4);
    stack.push(1);
    stack.push(3);
    stack.push(9);
    
   cout << stack.min() << endl;
   stack.pop();
   stack.pop();
   stack.pop();
   cout << stack.min() << endl;
  
 return 0; 
}
