#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq = {10, 20, 30};  // Direct initialization

    cout << "Deque Elements: ";
    for (int num : dq) cout << num << " ";  // Output: 10 20 30

    return 0;
}

