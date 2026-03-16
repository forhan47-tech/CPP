#include <iostream>
using namespace std;

int main() {
    int* arr = new int[3]{1, 2, 3}; // initialization
    for (int i = 0; i < 3; i++) cout << arr[i] << " ";
    delete[] arr; // free memory
    return 0;
}
