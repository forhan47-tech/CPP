#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40};

    for (const int& el : arr) { // can't modify
        cout << el << " ";
    }
    return 0;
}
