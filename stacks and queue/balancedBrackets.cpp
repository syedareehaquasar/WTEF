#include "stack.h"
#include <iostream>
#include <string>
using namespace std;

bool isBalanced(string exp) {
    int expsize = exp.size();
    if (expsize % 2 != 0) {
        return false;
    }
    myStack openbracket(expsize);
    myStack closebracket(expsize);
    for (int i = 0; i < expsize; i++) {
        if (exp[i] == '{' || exp[i] == '(' || exp[i] == '[') {
            openbracket.push(exp[i]);
        }
        else {
            closebracket.push(exp[i]);
        }
    }
    if (closebracket.getSize() != openbracket.getSize()) {
        return false;
    }
    return true;
}
int main(){
  cout << isBalanced("{[()]}") << endl;
  cout << isBalanced("[{(}]") << endl;
  cout << isBalanced("[{}[]()]") << endl;
  return 0;
}
