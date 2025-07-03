#include <iostream>
using namespace std;

class Sensor {
protected:
    int signal = 87;

public:
    void showSignal() {
        cout << "Signal inside class: " << signal << endl;  // ✅ Allowed
    }
};

int main() {
    Sensor s;

    s.showSignal();  // ✅ Okay: uses public wrapper
    // cout << s.signal << endl;  // ❌ Error: 'signal' is protected
    
    return 0;
}
