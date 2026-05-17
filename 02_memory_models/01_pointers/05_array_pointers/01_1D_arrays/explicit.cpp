#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int (*q)[5] = &arr; // pointer to entire array

    for (int i = 0; i < 5; i++) {
        cout << (*q)[i] << " ";
    }
    cout << endl;
}
