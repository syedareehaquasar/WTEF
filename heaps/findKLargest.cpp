#include "MaxHeap.h"
#include <iostream>
#include <queue>

using namespace std;

vector<int> findKLargest(int arr[], int size, int k){
    vector<int> output(k);
    priority_queue<int> heap;
    for (int i = 0; i < size; i++) {
        heap.push(arr[i]);
    }
    int i = 0;
    while (i < k) {
        output[i] = heap.top();
        heap.pop();
        i++;
    }
    return output;
}


int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    vector<int> kLargest = findKLargest(arr, n, k);
    string result = "";
    for (auto element : kLargest) {
        result = result + to_string(element) + ",";
    }
    result.pop_back();
    cout << result;
    return 0;
}
