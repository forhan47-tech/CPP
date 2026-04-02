#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> us;
    cout << "Is empty? " << (us.empty() ? "Yes" : "No") << endl;

    us.insert(10);
    cout << "Is empty after insert? " << (us.empty() ? "Yes" : "No") << endl;
}
