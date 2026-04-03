#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};
    auto it1 = v.begin();

    auto it2 = next(it1, 3); // move forward 3
    cout << *it2 << endl;  
}
