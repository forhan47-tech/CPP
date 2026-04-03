#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello";
    cout << "Capacity: " << s.capacity() << endl;
    s += " World! This is a long string.";
    cout << "New Capacity: " << s.capacity() << endl;
}
