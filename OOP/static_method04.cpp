#include <iostream>
using namespace std;

class Counter {
private:
    static int count;  // Static data member shared across all instances

public:
    Counter() {
        count++;       // Increment count on each object creation
    }

    static void showCount() {  // Static member function
        cout << "Object Count: " << count << endl;
    }
};

// Define static data member outside the class
int Counter::count = 0;

int main() {
    Counter c1, c2, c3;        // Three objects created
    Counter::showCount();     
    return 0;
}
