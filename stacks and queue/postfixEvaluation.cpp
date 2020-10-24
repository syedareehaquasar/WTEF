#include "stack.h"
#include <iostream>
#include <string>
using namespace std;

int evaluatePostFix(string exp) {
    myStack postfix(exp.length());
    for (int i = 0; i < exp.length(); i++) {
        if (isdigit(exp[i])) {
            postfix.push(exp[i] - '0');
        }
        else {
            int x = postfix.pop();
            int y = postfix.pop();
            char sign = exp[i];
            switch(sign) {
                case '+':
                    postfix.push(y + x);
                    break;
                case '-':
                    postfix.push(y - x);
                    break;
                case '*':
                    postfix.push(y * x);
                    break;
                case '/':
                    postfix.push(y / x);
                    break;
                default:
                    break;
            }
        }
    }
    return postfix.getTop();
}

int main(){
 cout << evaluatePostFix("921*-8-4+") << endl; 
}
