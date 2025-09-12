#include <iostream>
using namespace std;

class Box {
private:
    int size;

public:
    Box(int s) : size(s) {}

    bool isEqual(const Box& other) {
        return this->size == other.size;
    }
};

int main() {
    Box b1(10), b2(10), b3(5);

    cout << boolalpha << b1.isEqual(b2) << endl;  
    cout << boolalpha << b1.isEqual(b3) << endl;               
    return 0;
}
