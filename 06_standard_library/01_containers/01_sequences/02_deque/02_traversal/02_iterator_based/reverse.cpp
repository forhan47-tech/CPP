#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d = {10, 20, 30, 40};

    cout << "Reverse traversal: ";
    for (auto rit = d.rbegin(); rit != d.rend(); ++rit) {
        cout << *rit << " ";   // traverse backwards
    }
    return 0;
}
