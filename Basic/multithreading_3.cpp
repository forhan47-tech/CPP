#include <iostream>
#include <thread>
#include <string>

using namespace std;

void greet(const string& name) {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    string userName = "NAIMUDDIN";
    thread t1(greet, userName);
    t1.join();
    return 0;
}
