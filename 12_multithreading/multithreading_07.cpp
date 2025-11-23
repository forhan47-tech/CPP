#include <iostream>
#include <thread>
using namespace std;

int main() {
    thread t([](int a, int b) {
        cout << "Sum: " << a + b << endl;
    }, 5, 3);

    t.join(); 

    cout << "Main thread finished." << endl;
    return 0;
}