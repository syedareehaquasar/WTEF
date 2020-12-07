#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

// Function to find symmetric pairs
string findSymmetric(int arr[][2], int size) {
    unordered_map<int, int> allUniquePairs; 
    string result = "";
    
    for (int i = 0; i < size; i++) { 
        int first = arr[i][0]; 
        int secnd = arr[i][1]; 

        if (allUniquePairs.find(secnd) != allUniquePairs.end() && allUniquePairs[secnd] == first) { 
            result += "{" + to_string(first) + ", " + to_string(secnd) + "}";
            result += "{" + to_string(secnd) + ", " + to_string(first) + "}";
        }
  
        else {
            allUniquePairs[first] = secnd;
        }
    }
    return result;
}


int main() {
    // Accept input from the user and display the result
    int size;
    cin >> size;
    int arr[size][2];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 2; j++) {
            int k;
            cin >> k;
            arr[i][j] = k;
        }
    }
    cout << findSymmetric(arr, size);
    
    return 0;
}