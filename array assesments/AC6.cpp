#include <iostream>
using namespace std;

int findFirstUnique(int arr[], int size) {
    for (int i =0; i < size; i++) {
        int duplicates = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                duplicates = 0;
                break;
            }
        }
        if (duplicates) {
            return arr[i];
        }
    }
    return - 1;
}


int main(){
  int size = 6;
  int arr[size] = {2,54,7,2,6,54};
  
  cout << "Array: " ;
  for(int i=0; i<size; i++)
     cout << arr[i] << " ";
  cout << endl;
  
  int unique = findFirstUnique(arr,size);
  cout << "First Unique in an Array: " << unique << endl;
  return 0;
}