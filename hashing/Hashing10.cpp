#include <iostream>
#include "unordered_set"

using namespace std;


int * findSum(int arr[], int sum, int size) { 
    unordered_set<int> set;
    int* ans = new int[2];
    for (int i = 0; i < size; i++) {
        if (set.find((sum - arr[i])) != set.end()) {
            ans[0] = arr[i];
            ans[1] = sum - arr[i];
            return ans;
        }
        else {
            set.insert(arr[i]);
        }
    }
    return arr;
}

int main(){
    int size, sum;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cin >> sum;
    int* ans = findSum(arr, sum, size);
    cout << "Number 1 = " << ans[0] << endl;
    cout << "Number 2 = " << ans[1] << endl;
    cout << "Sum = " << sum;
    return 0;
}