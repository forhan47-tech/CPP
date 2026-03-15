#include <iostream>
#include <thread>
#include <atomic>
using namespace std;

atomic<int> value(0);

void writer() {
    value.store(42); // atomic store
}

void reader() {
    cout << "Read value: " << value.load() << endl; // atomic load
}

int main() {
    thread t1(writer), t2(reader);
    t1.join(); 
    t2.join();
}
