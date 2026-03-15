#include <iostream>
#include <thread>
using namespace std;

class Task {
public:
    void operator()(int x) {
        cout << "Task running with: " << x << endl;
    }
};

int main() {
    Task t1;
    thread t(t1, 10); // pass functor and argument
    t.join();
}
