#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d = {100, 200, 300};
    cout << "Front element: " << d.front() << endl; // 100
    d.front() = 999; // modify
    cout << "Modified front: " << d.front() << endl; // 999
}
