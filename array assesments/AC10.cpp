#include <iostream>
using namespace std;

void maxMin(int arr[], int size) {
    int result[size];
    int small = 0;
    int large = size - 1;
    int flag = true;
    for (int i = 0; i < size; i++) {
        if (flag) {
            result[i] = arr[large--];
        }
        else {
            result[i] = arr[small++];
        }
        flag = !flag;
    }
    for (int i = 0; i < size; i++) {
        arr[i] = result[i];
    }
}

int main(){
  int size = 6;
  int arr[size] = {1,2,3,4,5,6};
  cout << "Array before min/max: ";
  for (int i = 0; i < size; i++) 
    cout << arr[i] << " ";
  cout << endl;
  
  maxMin(arr,size);
  
  cout << "Array after min/max: ";
  for (int i = 0; i < size; i++) 
    cout << arr[i] << " ";
  cout << endl;
}