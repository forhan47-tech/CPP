#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d = {5, 10, 15, 20};
    d.erase(d.begin() + 2);   // remove element at index 2
    d.erase(d.begin(), d.begin() + 2); // remove specific range
    for (int x : d) cout << x << " "; // 5 10 20
}
