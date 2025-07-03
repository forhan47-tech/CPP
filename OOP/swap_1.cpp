#include <iostream>
using namespace std;

class Example {
public:
    int value;

    // Constructor
    Example(int v) : value(v) {}

    // Display function (const-safe)
    void show() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Example obj1(10), obj2(20);

    // Swapping the objects using std::swap
    swap(obj1, obj2);

    cout << "After Swap:" << endl;
    obj1.show();
    obj2.show();

    return 0;
}
