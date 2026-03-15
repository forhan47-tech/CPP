#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

int main() {
    int counter = 0;
    mutex m;

    auto increment = [&]() {
        for (int i = 0; i < 1000; i++) {
            lock_guard<mutex> guard(m); // RAII lock
            counter++;
        }
    };

    thread t1(increment), t2(increment);
    t1.join(); 
    t2.join();
    cout << "Final counter: " << counter << endl;
}
