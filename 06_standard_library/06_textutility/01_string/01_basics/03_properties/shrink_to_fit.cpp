#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Shrink";
    s.reserve(100); // artificially increase capacity
    cout << "Capacity before shrink: " << s.capacity() << endl;
    
    s.shrink_to_fit();
    cout << "Capacity after shrink: " << s.capacity() << endl;
}
