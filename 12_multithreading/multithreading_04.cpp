#include <iostream>
#include <thread>
#include <string>
using namespace std;

void printMessage(string msg, int count) {
    for (int i = 0; i < count; ++i)
        cout << msg << " " << i << endl;
}

int main() {
    thread t(printMessage, "Thread running", 5);
    t.join();
    return 0;
}