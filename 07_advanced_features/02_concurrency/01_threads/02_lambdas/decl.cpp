#include <iostream>
#include <thread>
using namespace std;

int main() {
    thread t([](){
        cout << "Hello from lambda thread!" << endl;
    });
    t.join();
}
