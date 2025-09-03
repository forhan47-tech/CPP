#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq = {10, 20, 30};  // Direct initialization

    // deque<int> dq(3, 0);  // Initializes a deque with 3 elements, all set to 0 --- IGNORE ---

    cout << "Deque Elements: ";
    for (int num : dq) cout << num << " ";  // Output: 10 20 30

    return 0;
}

