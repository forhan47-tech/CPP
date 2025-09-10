#include <iostream>
#include <thread>
using namespace std;

struct Task {
    void operator()() {
        cout << "Functor thread executed.\n";
    }
};

int main() {
    Task log;
    thread t(log);
    t.join();
    return 0;
}
