#include <iostream>
using namespace std;

class Example {
    int value;

public:
    Example(int v) : value(v) {}

    void show() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Example obj1(10), obj2(20);

    swap(obj1, obj2); // Swapping the objects 

    cout << "After Swap:" << endl;
    obj1.show();
    obj2.show();
    return 0;
}
