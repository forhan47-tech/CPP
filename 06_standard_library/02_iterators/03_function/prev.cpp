#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};
    auto it1 = v.end(); 

    auto it2 = prev(it1, 2); // move backward 2
    cout << *it2 << endl;       
}
