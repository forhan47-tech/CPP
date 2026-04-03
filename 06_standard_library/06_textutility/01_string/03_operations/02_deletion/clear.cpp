#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Erase me";
    s.clear();
    cout << "Size after clear: " << s.size() << endl;
}
