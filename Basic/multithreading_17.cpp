#include <iostream>
#include <thread>
#include <atomic>

using namespace std;

atomic<int> counter(0);

void atomicIncrement() {
    for (int i = 0; i < 1000; ++i)
        ++counter;
}

int main() {
    thread t1(atomicIncrement);
    thread t2(atomicIncrement);

    t1.join();
    t2.join();

    cout << "Atomic counter: " << counter << endl;
    return 0;
}
