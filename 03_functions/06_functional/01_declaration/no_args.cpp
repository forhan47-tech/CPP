#include <iostream>
#include <functional>
using namespace std;

void hello() {
    cout << "Hello, world!" << endl;
}

int main() {
    function<void()> func = hello; // store function
    func(); // call it
    return 0;
}
