#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int (*ptr)[5] = &arr; // points to entire block

    for (int i = 0; i < 5; i++) {
        cout << (*ptr)[i] << " ";
    }
    cout << endl;
}