#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;
    cout << "Is empty? " << (s.empty() ? "Yes" : "No") << endl; // Yes

    s.insert(100);
    cout << "Is empty after insert? " << (s.empty() ? "Yes" : "No") << endl; // No
}
