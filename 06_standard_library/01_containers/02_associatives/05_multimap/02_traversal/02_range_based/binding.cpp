#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int,string> mm = {{1,"Alice"},{1,"Charlie"},{2,"Bob"}};

    cout << "Structured binding traversal:\n";
    for (auto [key, value] : mm) {
        cout << key << " -> " << value << endl;
    }
}
