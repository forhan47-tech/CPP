#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m;

    m[1] = "Alice";   // inserts key 1 with value "Alice"
    m[2] = "Bob";     // inserts key 2 with value "Bob"

    cout << m[1] << endl; 
    cout << m[2] << endl; 

    cout << "Before: size = " << m.size() << endl; 
    cout << "Value at key 3: " << m[3] << endl;    // inserts default if key missing
    cout << "After: size = " << m.size() << endl; 
}
