#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d(10, 1);
    cout << "Size before shrink: " << d.size() << endl;
    d.shrink_to_fit();
    cout << "Size after shrink: " << d.size() << endl;
}
