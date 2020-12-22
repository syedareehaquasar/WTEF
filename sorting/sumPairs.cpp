#include <vector>
#include<unordered_set>
#include "QuickSort.h"
#include "AuxiliaryFunctions.h"


vector<int> findSum(int arr[], int arrSize, int s) {
  vector<int> elements;
  for (int i = 0; i < arrSize; i++) {
      int complement = s - arr[i];
      for (int j = i + 1; j < arrSize; j++) {
          if (arr[j] == complement) {
              elements.push_back(arr[i]);
              elements.push_back(complement);
          }
      }
  }
  return elements;
}

int main() {
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int sum;
    cin >> sum;
    vector<int> sumPairs = findSum(arr, size, sum);
    for (auto i = sumPairs.begin(); i < sumPairs.end(); ++i) {
        cout << *i << " ";
    }
    return 0;
}
