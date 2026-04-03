#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Data";
    cout << "Capacity before: " << s.capacity() << endl;
    
    s.reserve(50); // request capacity for 50 chars
    cout << "Capacity after: " << s.capacity() << endl;
}
