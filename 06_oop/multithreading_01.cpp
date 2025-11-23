#include <iostream>
#include <thread>
using namespace std;

// Functor class definition
class Task {
public:
    void operator()() {
        cout << "Functor thread executed.\n";
    }
};

int main() {
    Task log;
    
    thread t(log); // Launch thread with functor class
    t.join();        
    cout << "Main thread finished.\n";
    return 0;
}
