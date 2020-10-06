#include <iostream>
using namespace std;

int * findProduct(int arr[], int size)  { 
    int * product = new int[size];
    int allElemProd = 1;
    for (int i = 0; i < size; i++) {
        allElemProd *= arr[i];
    }
    for (int i = 0; i < size; i++) {
        product[i] = allElemProd / arr[i];
    }
    return product; 
} 

int main(){
  int size = 4;
  int arr[size] = {1, 3, 4, 5};
  
  cout << "Array before product: ";
  for(int i=0; i<size; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  
  int * prodArray = findProduct(arr,size);
  
  cout << "Array after product: ";
  for(int i=0; i<size; i++){
    cout << prodArray[i] << " ";
  }
  cout << endl;
  delete[] prodArray;
  return 0;
}