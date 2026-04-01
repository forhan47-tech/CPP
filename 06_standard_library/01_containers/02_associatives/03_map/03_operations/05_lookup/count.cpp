#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m = {{1, "Alice"}, {2, "Bob"}};

    cout << "Count of key 2: " << m.count(2) << endl; 
    cout << "Count of key 5: " << m.count(5) << endl; 
}
