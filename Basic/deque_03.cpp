#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq = {10, 20, 30, 40};

    cout << "First: " << dq.front() << endl;
    cout << "Last: " << dq.back() << endl;

    cout << "Third (safe access): " << dq.at(2) << endl;

    dq[2] = 100; // Direct index access
    cout << "Modified Third: " << dq[2] << endl;
    return 0;
}

