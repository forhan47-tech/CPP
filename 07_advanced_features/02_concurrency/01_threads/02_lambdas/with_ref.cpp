#include <iostream>
#include <thread>
using namespace std;

int main() {
    int x = 0;
    thread t([&x](){
        x++;
        cout << "X inside thread: " << x << endl;
    });
    t.join();
    cout << "X after thread: " << x << endl;
}
