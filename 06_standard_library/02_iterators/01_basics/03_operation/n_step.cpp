#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    auto it1 = v.end();
    cout << *(it1 - 2) << endl; // (it - n) moves backward by n

    auto it2 = v.begin();
    cout << *(it2 + 2) << endl; // (it + n) moves forward by n
}
