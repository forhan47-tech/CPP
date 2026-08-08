#include <iostream>
#include <thread>
using namespace std;

int main() {
    int x = 42;
    thread t([x](){
        cout << "Lambda captured value: " << x << endl;
    });
    t.join();
}
