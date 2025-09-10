#include <iostream>
#include <atomic>
using namespace std;

int main() {
    atomic<int> val(42);

    int old = val.exchange(100);
    cout << "Old value: " << old << ", New value: " << val << endl;

    return 0;
}
