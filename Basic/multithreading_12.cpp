#include <iostream>
#include <atomic>

using namespace std;

atomic<int> flag(5);

int main() {
    int value = flag.load();
    cout << "Loaded value: " << value << endl;
    return 0;
}
