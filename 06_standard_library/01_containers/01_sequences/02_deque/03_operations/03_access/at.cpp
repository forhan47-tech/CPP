#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d = {10, 20, 30};
    cout << "Element at index 2: " << d.at(2) << endl; 

    try {
        cout << d.at(5) << endl; // invalid index
    } catch(const out_of_range& e) {
        cout << "Exception: " << e.what() << endl;
    }
}
