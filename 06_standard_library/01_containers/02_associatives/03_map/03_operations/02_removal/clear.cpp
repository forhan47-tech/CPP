#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m = {{1, "Alice"}, {2, "Bob"}};
    m.clear();
    cout << "Size: " << m.size(); 
}
