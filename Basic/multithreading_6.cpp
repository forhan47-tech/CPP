#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

mutex mtx;
int counter = 0;

void increment() {
    lock_guard<mutex> lock(mtx);
    counter++;
    cout << "Counter: " << counter << endl;
}

int main() {
    thread t1(increment);
    thread t2(increment);
    t1.join();
    t2.join();

    return 0;
}
