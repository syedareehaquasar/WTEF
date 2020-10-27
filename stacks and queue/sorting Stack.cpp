#include "stack.h"

myStack sortStack(myStack stack, int size) {
    myStack sortedStack(size);
    while (!stack.isEmpty()) {
        int top = stack.getTop();
        stack.pop();
        while (!sortedStack.isEmpty() && sortedStack.getTop() > top) {
            stack.push(sortedStack.getTop());
            sortedStack.pop();
        }
        sortedStack.push(top);
    }
    return sortedStack;
}

int main(){
    myStack stack(7);
    stack.push(2);
    stack.push(97);
    stack.push(4);
    stack.push(42);
    stack.push(12);
    stack.push(60);
    stack.push(23);
    (sortStack(stack, 7)).showStack();
  
}
