#include <iostream>
#include <thread>
#include <atomic>
using namespace std;

atomic<int> value(0);

void writer(int id) {
    value.store(id); // each writer sets a new value
}

void reader(int id) {
    cout << "Reader " << id << " sees: " << value.load() << endl;
}

int main() {
    thread w1(writer, 100), r1(reader, 1);
    w1.join();
    r1.join();
}
