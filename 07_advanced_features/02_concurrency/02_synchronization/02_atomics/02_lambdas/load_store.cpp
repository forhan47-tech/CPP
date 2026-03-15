#include <iostream>
#include <thread>
#include <atomic>
using namespace std;

int main() {
    atomic<int> value(0);

    auto writer = [&value]() {
        value.store(42); // atomic store
    };

    auto reader = [&value]() {
        cout << "Read value: " << value.load() << endl; // atomic load
    };

    thread t1(writer), t2(reader);
    t1.join(); 
    t2.join();
}
