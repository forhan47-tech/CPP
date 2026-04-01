#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m1 = {{1, "One"}, {2, "Two"}};
    map<int, string> m2(m1);   // copy of m1

    for (auto &p : m2)
        cout << p.first << " -> " << p.second << endl;
}
