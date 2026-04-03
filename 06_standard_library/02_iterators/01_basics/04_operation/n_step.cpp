#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    auto it1 = v.end();
    cout << *(it1 - 2) << endl; // moves backward by 2 steps

    auto it2 = v.begin();
    cout << *(it2 + 2) << endl; // moves forward by 2 steps
}
