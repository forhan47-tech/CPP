#include <iostream>
#include <thread>
#include <string>

using namespace std;

void greet(const string& name) {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    string userName = "NAIMUDDIN";
    thread greetingThread(greet, userName);
    greetingThread.join();
    return 0;
}
