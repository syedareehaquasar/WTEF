#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

void swap(vector<int> &array, int firstIndex, int secondIndex){
    int temp = array[firstIndex];
    array[firstIndex] = array[secondIndex];
    array[secondIndex] = temp;
    return;
}

void minHeapify(vector<int> &minHeap, int i){
    if (2*i + 1 >= minHeap.size()) {
        return;
    }
    int minElement = i;
    if (minHeap[minElement] > minHeap[2*i + 1]) {
        minElement = 2*i + 1;
    }
    if ((2*i + 2 < minHeap.size()) && minHeap[minElement] > minHeap[2*i + 2]) {
        minElement = 2*i + 2;
    }
    if (i != minElement) {
        swap(minHeap, minElement, i);
        minHeapify(minHeap, minElement);
    }
    return;
}

string convertMax(vector<int> maxHeap){
  int length = maxHeap.size();
  for (int i = length/2; i >= 0; i--) {
      minHeapify(maxHeap, i);
  }
  string result = "";
  for (int element : maxHeap) {
      result = result + to_string(element) + ",";
  }
  result.pop_back();
  return result;
}

int main(){
  int n;
  cin >> n;
  vector<int> maxHeap;
  while (n --> 0) {
      int element;
      cin >> element;
      maxHeap.push_back(element);
  }
  cout << convertMax(maxHeap);
  return 0;
}
