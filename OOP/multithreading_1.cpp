#include <iostream>
#include <thread>

using namespace std;

class Worker {
public:
    void run() {
        cout << "Worker thread running\n";
    }
};

int main() {
    Worker w;
    thread t(&Worker::run, &w);
    t.join();
}
