#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};
    auto it = v.begin();

    advance(it, 3);  // Move iterator forward by 3 positions

    cout << "Element at new position: " << *it << endl;
    return 0;
}


