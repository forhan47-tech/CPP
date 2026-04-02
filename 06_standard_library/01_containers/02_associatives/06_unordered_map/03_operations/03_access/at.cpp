#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int,string> um = {{1,"Alice"},{2,"Bob"}};

    cout << "Key 1 -> " << um.at(1) << endl;

    try {
        cout << "Key 3 -> " << um.at(3) << endl; // throws exception
    } catch(const out_of_range &e) {
        cout << "Exception: " << e.what() << endl;
    }
}
