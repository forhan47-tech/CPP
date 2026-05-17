#include <iostream>
using namespace std;

int main() {
   int* arr = new int[5]();   // all elements initialized to 0

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";  
    }
    delete[] arr;
}
