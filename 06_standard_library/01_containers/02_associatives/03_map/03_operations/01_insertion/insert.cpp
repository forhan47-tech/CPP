#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m;

    auto result = m.insert({1, "Alice"});
    cout << (result.second ? "Inserted" : "Failed") << endl; 

    result = m.insert({1, "Bob"});
    cout << (result.second ? "Inserted" : "Failed") << endl; 
}
