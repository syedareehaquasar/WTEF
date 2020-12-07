#include <unordered_map>
#include <string>
#include <iostream>
using namespace std;

bool findSubZero(int* arr, int size) {
    unordered_map<int, int> sumSet; 
    int sum = 0;
    
    for (int i = 0 ; i < size ; i++) 
    { 
        sum += arr[i];

        if (sum == 0 || sumSet.find(sum) != sumSet.end()) 
            return true; 
  
        sumSet[sum] = i;
    } 
    return false; 
}

int main(){
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << findSubZero(arr, size);
}
