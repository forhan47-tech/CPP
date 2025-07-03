#include <iostream>
#include <map>

using namespace std;

int main() {
    multimap<int, string> mm = {{1, "Apple"}, {2, "Banana"}, {1, "Cherry"}};

    for (auto it = mm.begin(); it != mm.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }

    return 0;
}
