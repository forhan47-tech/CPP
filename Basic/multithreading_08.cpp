#include <iostream>
#include <thread>
using namespace std;

int main() {
    int x = 10, y = 20;

    thread t([=]() {
        cout << "Sum: " << x + y << endl;
    });

    t.join();

    cout << "Main thread finished." << endl;
    return 0;
}
