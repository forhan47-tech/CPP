#include <iostream>
#include <thread>
using namespace std; 

void add(int a, int b) {
    cout << "Sum: " << a + b << endl;
}

int main() {
    thread t(add, 5, 3);
    t.join();
    cout << "Main thread finished." << endl;
    return 0;
}