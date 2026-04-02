#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d = {10, 20, 30};
    cout << "Back element: " << d.back() << endl; // 30
    d.back() = 77; // modify
    cout << "Modified back: " << d.back() << endl; // 77
}
