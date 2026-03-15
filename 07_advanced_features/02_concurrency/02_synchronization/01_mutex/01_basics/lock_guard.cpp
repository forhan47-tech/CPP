#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex m;
int counter = 0;

void increment() {
    lock_guard<mutex> guard(m); // lock automatically
    counter++;
}

int main() {
    thread t1(increment), t2(increment);
    t1.join(); 
    t2.join();
    cout << "Counter: " << counter << endl;
}
