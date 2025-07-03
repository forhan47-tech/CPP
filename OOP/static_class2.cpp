#include <iostream>
using namespace std;

class Counter {
private:
    static int count;  // Static data member

public:
    Counter() {
        count++;       // Increments every time an object is created
    }

    static void showCount() {  // Static member function
        cout << "Object Count: " << count << endl;
    }
};

// Define static data member outside the class
int Counter::count = 0;

int main() {
    Counter c1, c2, c3;
    Counter::showCount();  // Call without object
    return 0;
}
