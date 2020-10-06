#include <iostream>
using namespace std;

int findSecondMaximum(int arr[], int size) {
    int firstMax, secondmax;
    if (arr[0] < arr[1]) {
        firstMax = arr[1];
        secondmax = arr[0];
    }
    else {
        firstMax = arr[0];
        secondmax = arr[1];
    }
    for (int i = 2; i < size; i++) {
        if (arr[i] > firstMax) {
            secondmax = firstMax;
            firstMax = arr[i];
        }
        else if (arr[i] > secondmax && arr[i] != firstMax) {
         secondmax = arr[i];
        }
    }
    return secondmax;
}

int main(){
  int size = 5;
  int arr[size] = {-2,-33,-10,-33,-456};
  
  cout << "Array: ";
  for(int i=0; i<size; i++)
    cout << arr[i] << " ";
  cout << endl;
  
  int secMax = findSecondMaximum(arr,size);
  cout << "Second maximum: " << secMax << endl;
  return 0;
}