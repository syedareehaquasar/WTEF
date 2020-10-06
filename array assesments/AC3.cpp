#include <iostream>
using namespace std;

//Return 2 elements of arr that sum to the given value
int * findSum(int arr[], int value, int size) {
  // Sorting function is prepended as sort(arr, low, high)
  for (int i = 0; i < size; i++) {
      for (int j = 0; j < size; j++) {
          if (arr[i] + arr[j] == value) {
              arr[0] = arr[i];
              arr[1] = arr[j];
              return arr;
          }
      }
  }
	return arr; 
} 

int main(){

  int size = 5, value = 9;
  int arr[size] = {2,4,5,7,8};
  
  if(size > 0){
    int * arr2 = findSum(arr, value, size);
    int num1 = arr2[0];
    int num2 = arr2[1];

      if((num1 + num2) != value)
        cout << "Not Found" << endl;
      else {
        cout << "Number 1 = " << num1 << endl;
        cout << "Number 2 = " << num2 << endl;
        cout << "Sum = " << num1+num2 << endl;

      }
    } else {
      cout << "Input Array is Empty!" << endl;
    }
}