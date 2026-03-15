#include <iostream>
#include <thread>
using namespace std;

void sum(int a, int b) {
    cout << "Sum: " << a + b << endl;
}

int main() {
    thread t(sum, 5, 7); // pass arguments
    t.join();
}
