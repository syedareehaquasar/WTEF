#include "MinHeap.h"
#include <iostream>
#include <queue>

using namespace std;

vector<int> findKSmallest(int  arr[], int size, int k){
  
  vector<int> output(k);
 priority_queue<int> heap;
 for (int i = 0; i < size; i++) {
     heap.push(arr[i]);
     if (heap.size() > k) {
         heap.pop();
     }
 }
 int i = k - 1;
 while (!heap.empty()) {
     output[i] = heap.top();
     heap.pop();
     i--;
 }

  return output;
}

int main(){
    // Accept input from the user and display the result
    int n, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> k;
    vector<int> kSmallest = findKSmallest(arr, n, k);
    string result = "";
    for (auto element : kSmallest) {
        result = result + to_string(element) + ",";
    }
    result.pop_back();
    cout << result;
    return 0;
}
