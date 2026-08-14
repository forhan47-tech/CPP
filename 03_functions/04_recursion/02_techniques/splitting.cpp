#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int key) {
    if (low > high) return -1;  // base case

    int mid = (low + high) / 2;
    if (arr[mid] == key) return mid;
    else if (arr[mid] > key) 
        return binarySearch(arr, low, mid - 1, key);  // search left half
    else 
        return binarySearch(arr, mid + 1, high, key);  // search right half
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 5;
    int idx = binarySearch(arr, 0, n - 1, key);
    cout << (idx != -1 ? "Found" : "Not Found") << endl;
}
