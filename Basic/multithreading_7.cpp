#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

mutex mtx;

void safePrint(int id) {
    lock_guard<mutex> lock(mtx);
    cout << "Thread " << id << "\n";
}

int main() {
    thread t1(safePrint, 1);
    thread t2(safePrint, 2);
    thread t3(safePrint, 3);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}
