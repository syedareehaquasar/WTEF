#include <iostream>
using namespace std;

int * mergeArrays(int arr1[], int arr2[], int arr1Size,int arr2Size)
{
    int *arr3; // creating new array
    int arr3Size = arr1Size + arr2Size;
    arr3 = new int[arr3Size];
    int i = 0, a1 = 0, a2 = 0;
    while (i < arr3Size) {
        if(a1 == arr1Size){
            for(int j = a2; j < arr2Size; j++){
                arr3[i] = arr2[j];
            }
        }
        else if(a2 == arr2Size){
            for(int k = a1; k < arr1Size; k++){
                arr3[i] = arr1[k];
            }
        }
        else if(arr1[a1] < arr2[a2]) {
            arr3[i] = arr1[a1];
            a1 += 1;
        }
        else{
            arr3[i] = arr2[a2];
            a2 += 1;
        }
        i++;
    }
    return arr3; // returning array
}

int main() {
    int size1 = 5, size2 = 3;
    int arr[size1] = {1,12,14,17,23}; // creating array 1
    int arr1[size2] = {11,19,27};  // creating array 2
    int * arr2 = mergeArrays(arr, arr1, size1, size2); // calling mergeArrays
    for(int i=0; i< size1+size2 ; i++) {
        cout << arr2[i] << " ";
    }
    delete arr2;  // deleting pointer
    return 0;
}