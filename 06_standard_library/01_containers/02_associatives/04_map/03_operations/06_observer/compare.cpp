#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m1 = {{1, "Alice"}, {2, "Bob"}};
    map<int, string> m2 = {{1, "Alice"}, {2, "Bob"}};
    map<int, string> m3 = {{1, "Alice"}, {3, "Charlie"}};
    map<int, string> m4 = {{1, "Alice"}};

    // Equality and inequality
    cout << "m1 == m2 : " << (m1 == m2 ? "true" : "false") << endl;
    cout << "m1 != m3 : " << (m1 != m3 ? "true" : "false") << endl;

    // Relational comparisons
    cout << "m1 < m3  : " << (m1 < m3 ? "true" : "false") << endl;
    cout << "m1 <= m2 : " << (m1 <= m2 ? "true" : "false") << endl;
    cout << "m3 > m4  : " << (m3 > m4 ? "true" : "false") << endl;
    cout << "m4 >= m1 : " << (m4 >= m1 ? "true" : "false") << endl;
}
