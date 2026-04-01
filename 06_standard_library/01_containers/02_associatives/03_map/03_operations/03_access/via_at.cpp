#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m = {{1, "Alice"}, {2, "Bob"}};

    cout << m.at(1) << endl;

    try {
        cout << m.at(3) << endl; // throws exception if key missing
    } catch (const out_of_range& e) {
        cout << "Key not found!" << endl;
    }
}
