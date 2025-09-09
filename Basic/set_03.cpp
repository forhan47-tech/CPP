#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10, 20, 30};

    s.clear();
    cout << "Set size: " << s.size() << endl;
    cout << "Set empty: " << (s.empty() ? "Yes" : "No") << endl;
    return 0;
}
