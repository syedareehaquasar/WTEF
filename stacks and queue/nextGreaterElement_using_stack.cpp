#include "stack.h"
#include <iostream>
using namespace std;

int* nextGreaterElement(int *arr, int size) {
    myStack temp(size);
    int max = -1;
    int *nextGreater = new int[size];
    int index = 0;
    temp.push(arr[0]);
    for (int i = 1; i < size; ++i){
        if (temp.getTop() < arr[i])
           while (temp.getTop() < arr[i] && !temp.isEmpty()){
               temp.pop();
               nextGreater[index ++] = arr[i];
           }
        temp.push(arr[i]);
    }
    while (!temp.isEmpty()){
        temp.pop();
        nextGreater[index ++] = -1;
    }
    return nextGreater;
}

  
int main(){
  
   
   int arr[] = {4,6,3,2,8,1,9,9};
   int arr_size = sizeof(arr) / sizeof(arr[0]); 
   int* res = nextGreaterElement(arr,arr_size);
    cout << "____Result____" <<endl;
   for (int i = 0; i < arr_size; i++) 
        cout << arr[i] << " ---> " << res[i] << endl; 
   return 0; 
}
