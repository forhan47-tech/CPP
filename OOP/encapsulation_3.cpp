#include <iostream>
using namespace std;

class SecureCounter {
private:
    int count = 0;  // 👈 Hidden from outside

public:
    void increment() { 
        count++; 
        cout << "Incremented! Count: " << count << endl;
    }

    void decrement() { 
        if (count > 0) {
            count--; 
            cout << "Decremented! Count: " << count << endl;
        } else {
            cout << "Counter is already at zero!" << endl;
        }
    }

    int getCount() const { 
        return count; 
    }
};

int main() {
    SecureCounter counter;

    counter.increment();  // Count becomes 1
    counter.increment();  // Count becomes 2
    counter.decrement();  // Count becomes 1
    counter.decrement();  // Count becomes 0
    counter.decrement();  // Won't go below 0

    cout << "Final Count: " << counter.getCount() << endl;

    // cout << counter.count;  // ❌ Error: private member

    return 0;
}
