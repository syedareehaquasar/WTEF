#include <iostream>
using namespace std;

int b = -1;
int a = -1;

class twoStacks
{
    private:
        int size;
        int *arr;
        int top1 = -1, top2 = -1;
   
    public:
        twoStacks(int n) {
            size = n;
            arr = new int[size];
        }
 
        void push1(int value) {
            if (top1 >= size) {
                cout << "stack is full";
            }
            else {
                if (top1 == -1 && top2 != -1) {
                    top1 += top2 + 2;
                    a = top1;
                }
                else {
                    top1++;
                }
                arr[top1] = value;
            }
        }
 
        void push2(int value) {
            if (top2 >= size) {
                cout << "stack is full";
            }
            else {
                if (top2 == -1 && top1 != -1) {
                    top2 += top1 + 2;
                    b = top2;
                }
                else {
                    top2++;
                }
                arr[top2] = value;
            }
        }

        int pop1() {
            if (top1 != -1 && top1 >= a) {
                int x = arr[top1];
                top1--;
                return x;
            }
            return -1;
        }

        int pop2() {
            if (top2 != -1 && top2 >= b) {
                int x = arr[top2];
                top2--;
                return x;
            }
            return -1;
        }
};

int main()
{
    twoStacks tS(5);
    tS.push1(11);
    tS.push1(3);
    tS.push1(7);
    tS.push2(1);
    tS.push2(9);
  
  cout << tS.pop1() << endl;
  cout << tS.pop2() << endl;
  cout << tS.pop2() << endl;
  cout << tS.pop2() << endl;
  cout << tS.pop1() << endl;
  
//   twoStacks t(5);
//     t.push2(11);
//     t.push2(3);
//     t.push2(7);
//     t.push1(1);
//     t.push1(9);
  
//   cout << t.pop2() << endl;
//   cout << t.pop1() << endl;
//   cout << t.pop1() << endl;
//   cout << t.pop1() << endl;
//   cout << t.pop2() << endl;

  return 0; 
}
