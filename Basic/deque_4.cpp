#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> dq;
    
    cout << "Enter 4 integers to add to the deque: ";
    for (int i = 0; i < 4; i++) {
        int num;
        cin >> num;
        dq.push_back(num);  // Insert elements at the end
    }

    cout << "Deque elements: ";
    for (int num : dq) cout << num << " ";

    return 0;
}
