#include <iostream>
#include <thread>
using namespace std;

class Worker {
public:
    void operator()() {
        cout << "Hello from functor thread!" << endl;
    }
};

int main() {
    Worker w;
    thread t(w);   // run functor in thread
    t.join();
}
