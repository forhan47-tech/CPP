#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    int length = sizeof(arr) / sizeof(arr[0]); 
    cout << "Length of array: " << length;
}
