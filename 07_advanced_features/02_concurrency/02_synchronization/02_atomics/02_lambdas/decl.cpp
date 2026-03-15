#include <iostream>
#include <thread>
#include <atomic>
using namespace std;

int main() {
    atomic<int> counter(0);

    auto increment = [&counter]() {
        for (int i = 0; i < 1000; i++) {
            counter++; // atomic increment
        }
    };

    thread t1(increment), t2(increment);
    t1.join(); 
    t2.join();
    cout << "Final counter: " << counter << endl;
}
