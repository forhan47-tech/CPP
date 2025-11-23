#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    for (int& e : arr) {  
        e += 2;           // Reference allows modification
    }

    cout << "Modified values: ";
    for (int val : arr) {  
        cout << val << " ";
    }

    return 0;
}

