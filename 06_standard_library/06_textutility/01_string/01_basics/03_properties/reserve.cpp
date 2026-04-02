#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Data";
    cout << "Capacity before reserve: " << s.capacity() << endl;

    s.reserve(100); // reserve space for 100 characters
    cout << "Capacity after reserve: " << s.capacity() << endl;
}
