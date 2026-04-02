#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};
    cout << "Element at index 2: " << v.at(2) << endl; // 30

    try {
        cout << v.at(5) << endl; // invalid index
    } catch(const out_of_range& e) {
        cout << "Exception: " << e.what() << endl;
    }
}
