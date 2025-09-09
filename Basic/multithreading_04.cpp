#include <iostream>
#include <thread>
using namespace std;

struct Task {
    void operator()() {
        cout << "Functor thread executed.\n";
    }
};

int main() {
    thread t(Task());
    t.join();
    return 0;
}
