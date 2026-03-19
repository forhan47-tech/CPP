#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};
    v.clear(); // removes all elements

    cout << "Size after clear: " << v.size() << endl; 
    return 0;
}
