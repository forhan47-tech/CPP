#include <iostream>
#include <thread>
using namespace std;

void printNumbers(int id) {
    for (int i = 0; i < 5; ++i)
        cout << "Thread " << id << ": " << i << endl;
}

int main() {
    thread t1(printNumbers, 1);  // Multiple threads
    thread t2(printNumbers, 2);

    t1.join();
    t2.join();

    return 0;
}
