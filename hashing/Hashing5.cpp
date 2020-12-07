#include <unordered_map>
#include <string>
#include <iostream>
#include <sstream>  
#include <stdio.h>
#include <cstdlib>

using namespace std;

string findPair(int* arr, int size) {
    string result = "";
    unordered_map<int, pair<int, int>> sumPair;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            int sum = arr[i] + arr[j];
            if (sumPair.find(sum) != sumPair.end()) {
                pair<int, int> sp = sumPair[sum];
                return "{" + to_string(arr[sp.first]) + "," + to_string(arr[sp.second]) 
                     + "},{" + to_string(arr[i]) + "," + to_string(arr[j]) + "}"; 
            }
            else {
                sumPair[sum] = make_pair(i, j); 
            }
        }
    }
    return result;
}
int main() {
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << findPair(arr, size);
}