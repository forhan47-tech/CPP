#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq = {1, 2, 3};

    dq.push_front(0);  // Add 0 at the front
    dq.push_back(4);   // Add 4 at the end

    dq.pop_front();    // Remove first element
    dq.pop_back();     // Remove last element

    dq.insert(dq.begin() + 1, 5); // Insert 5 at index 1    
    dq.erase(dq.begin() + 2); // Remove element at index 2

    cout << "Modified Deque: ";
    for (int num : dq) cout << num << " ";
    return 0;
}

