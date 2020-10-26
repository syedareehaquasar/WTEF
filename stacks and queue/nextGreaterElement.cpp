#include "stack.h"
#include <iostream>
using namespace std;

int* nextGreaterElement(int *arr, int size) {
    int* greaterarr = new int[size];
    for (int i = 0 ; i < size ; i++ ) {
        for (int j = i+1 ; j < size ; j++) {
            if (arr[j] > arr[i]) {
                greaterarr[i] = arr[j];
                break;
            }
        }
        if (!greaterarr[i]) {
            greaterarr[i] = -1;
        }
    }
    return greaterarr;
}

  
int main(){
  
   
   int arr[] = {4,6,3,2,8,1,9,9};
   int arr_size = sizeof(arr) / sizeof(arr[0]); 
   int* res = nextGreaterElement(arr,arr_size);
    cout << "____Result____" <<endl;
   for (int i = 0; i < arr_size; i++) 
        cout << arr[i] << " ---> " << res[i] << endl; 
  
}
