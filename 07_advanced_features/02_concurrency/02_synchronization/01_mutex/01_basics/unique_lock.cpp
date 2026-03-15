#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex m;

void task() {
    unique_lock<mutex> lock(m); // lock acquired
    cout << "Thread safely working..." << endl;
}

int main() {
    thread t1(task), t2(task);
    t1.join(); 
    t2.join();
}
