#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int,string> um;
    cout << "Is empty? " << (um.empty() ? "Yes" : "No") << endl;

    um[1] = "Alice";
    cout << "Is empty after insert? " << (um.empty() ? "Yes" : "No") << endl;
}
