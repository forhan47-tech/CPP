#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;   // empty vector

    vec.push_back(10);
    vec.push_back(20);

    for (int x : vec) cout << x << " ";
}
