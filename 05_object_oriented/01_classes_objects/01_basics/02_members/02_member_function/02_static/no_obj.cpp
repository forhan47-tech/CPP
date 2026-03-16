#include <iostream>
using namespace std;

class Counter {
public:
    static int value;

    static void increment() {   // member function
        value++;
    }
};

int Counter::value = 0;

int main() {
    Counter::increment();   // called without object
    Counter::increment();  
    cout << "Shared value: " << Counter::value << endl;
}
