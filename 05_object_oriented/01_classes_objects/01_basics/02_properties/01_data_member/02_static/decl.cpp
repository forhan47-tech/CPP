#include <iostream>
using namespace std;

class Counter {
public:
    static int value; // data member(shared)

    void increment() { 
        value++; 
    }
};

int Counter::value = 0; // initialize static member

int main() {
    Counter c1, c2; // two objects

    c1.increment();
    c2.increment();

    cout << "Shared value: " << Counter::value << endl;
}
