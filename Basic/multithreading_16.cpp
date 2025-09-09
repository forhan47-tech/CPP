#include <iostream>
#include <atomic>
using namespace std;

int main() {
    atomic<bool> flag(false);

    cout << "Initial flag: " << flag << endl;

    flag.store(true);
    cout << "Flag after store: " << flag << endl;

    bool current = flag.load();
    cout << "Flag loaded: " << current << endl;

    return 0;
}
