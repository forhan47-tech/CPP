#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

int main() {
    int data = 0;
    mutex m;

    auto task = [&]() {
        unique_lock<mutex> lock(m);
        data++;
        cout << "Data updated to: " << data << endl;
        lock.unlock(); // manual unlock before scope ends
    };

    thread t1(task), t2(task);
    t1.join(); 
    t2.join();
}
