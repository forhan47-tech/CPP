#include <iostream>
using namespace std;

template <typename T>
class Box {
private:
    T value;
public:
    void set(T val) { value = val; }
    T get() { return value; }
};

int main() {
    Box<int> intBox;
    Box<string> strBox;

    intBox.set(100);
    strBox.set("Hello, NAIMUDDIN");

    cout << intBox.get() << endl;    // Output: 100
    cout << strBox.get() << endl;    // Output: Hello, NAIMUDDIN

    return 0;
}
