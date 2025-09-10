#include <iostream>
#include <thread>
using namespace std;

int main() {
    thread t([]() {
        cout << "Lambda thread executed.\n";
    });
    t.join();
    return 0;
}
