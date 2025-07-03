#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr;

    for (int i = 0; i < 5; i++) {
        arr.push_back(i); // Add elements to the vector
    }

    cout << "Dynamic Array (Vector) Elements: ";
    for (int num : arr) cout << num << " ";

    return 0;
}

