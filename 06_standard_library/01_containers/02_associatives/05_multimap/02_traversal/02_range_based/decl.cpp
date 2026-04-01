#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int,string> mm = {{1,"Alice"},{1,"Charlie"},{2,"Bob"}};

    cout << "Range-based traversal:\n";
    for (auto &p : mm) {
        cout << p.first << " -> " << p.second << endl;
    }
}
