#include <iostream>
#include <atomic>

using namespace std;

atomic<int> flag;

int main() {
    flag.store(42);
    cout << "Stored value: " << flag << endl;
    return 0;
}
