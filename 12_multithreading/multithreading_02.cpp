#include <iostream>
#include <thread>
using namespace std;

struct Task {
    void operator()(int count) {
        for (int i = 0; i < count; ++i)
            cout << "Functor thread executed [" << i << "]\n";
    }
};

int main() {
    Task log;
    thread t(log, 3); // Pass parameter to operator()
    t.join();
    return 0;
}