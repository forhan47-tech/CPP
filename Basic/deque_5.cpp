#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> dq;
    int num;

    cout << "Enter numbers (type -1 to stop): ";
    while (cin >> num && num != -1) {
        dq.push_back(num);
    }

    cout << "Deque elements: ";
    for (int num : dq) cout << num << " ";

    return 0;
}
