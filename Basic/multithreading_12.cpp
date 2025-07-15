#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

mutex m1, m2;

void threadSafe() {
    std::lock(m1, m2); // Lock both mutexes atomically

    lock_guard<mutex> lock1(m1, adopt_lock);
    lock_guard<mutex> lock2(m2, adopt_lock);

    cout << "Thread acquired both locks safely." << endl;
}

int main() {
    thread t1(threadSafe);
    thread t2(threadSafe);

    t1.join();
    t2.join();

    return 0;
}
