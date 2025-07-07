#include <iostream>
#include <functional>

using namespace std;

int main() {
    int data = 5;

    auto handler = [](int value) {
        cout << "Event handled with value: " << value << '\n';
    };

    handler(data);  // Direct invocation, no separate function needed

    return 0;
}
