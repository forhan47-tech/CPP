#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d;
    cout << "Is empty? " << (d.empty() ? "Yes" : "No") << endl;

    d.push_back(100);
    cout << "Is empty after push? " << (d.empty() ? "Yes" : "No") << endl;
}
