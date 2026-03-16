#include <iostream>
using namespace std;

class Box {
    int length;
public:
    Box(int l) : length(l) {}

    bool isEqual(Box& other) {
        return this->length == other.length;  // using this pointer
    }
};

int main() {
    Box b1(10), b2(10), b3(20);

    cout << (b1.isEqual(b2) ? "Equal" : "Not Equal") << endl;
    cout << (b1.isEqual(b3) ? "Equal" : "Not Equal") << endl;
}
