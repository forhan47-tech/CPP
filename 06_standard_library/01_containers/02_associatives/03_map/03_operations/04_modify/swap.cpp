#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m1 = {{1, "A"}, {2, "B"}};
    map<int, string> m2 = {{10, "X"}, {20, "Y"}};

    m1.swap(m2);

    for (auto &p : m1)
        cout << p.first << " -> " << p.second << endl;
}
