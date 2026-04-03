#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};
    auto it = v.begin();
    advance(it, 2); // move forward by 2
    cout << *it << endl; 
}
