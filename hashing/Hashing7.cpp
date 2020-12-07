#include <iostream>
using namespace std;
#include <unordered_map> 
using namespace std; 
  
int findFirstUnique(int arr[], int size) 
{ 
   unordered_map<int, int> freq;
   for (int i = 0; i < size; i++) {
       freq[arr[i]]++;
   }
   for (int i = 0; i < size; i++) {
       if (freq[arr[i]] == 1) {
           return arr[i];
       }
   }
   return -1;
} 

int main(){
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << findFirstUnique(arr, size);
}