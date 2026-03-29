#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;  // declaration only

    dq.push_back(10);  // initialization
    dq.push_back(20);

    cout << dq[0] << endl;  // access
    cout << dq[1] << endl;
}
