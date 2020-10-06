#include <iostream>
using namespace std;

//Re-Arrange Positive and Negative Values of Given Array 
void reArrange(int arr[], int size) {
  // A swap function is prepended. Use it like swap(arg1,arg2)
  for (int i = 0; i < size; i++) {
      if (arr[i] >= 0) {
          for (int j = i + 1; j < size; j++) {
              if (arr[j] < 0) {
                  swap(arr[i], arr[j]);
              }
          }
      }
  }
}


int main(){
  int size = 6;
  int arr[size] = {2,4,-6,0,-5,-10};
  
  cout << "Array before rearranging: ";
  for(int i = 0; i<size; i++)
    cout << arr[i] << " ";
  cout << endl;
  
  reArrange(arr,size);
  
  cout << "Array after rearranging: ";
  for(int i = 0; i<size; i++)
    cout << arr[i] << " ";
  cout << endl;
}