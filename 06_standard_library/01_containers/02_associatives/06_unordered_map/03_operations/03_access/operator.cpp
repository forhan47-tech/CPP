#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int,string> um;

    um[1] = "Alice"; // inserts key 1 with value "Alice"
    cout << "Key 1 -> " << um[1] << endl;

    cout << "Key 2 -> " << um[2] << endl; // inserts key 2 with default value ""
    cout << "Size: " << um.size() << endl; 
}
