#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d = {10, 20, 30};
    cout << "Element at index 1: " << d[1] << endl; // direct access(no bounds check)
    cout << "Element at index 2: " << d.at(2) << endl; // safe access(throws exception)
}
