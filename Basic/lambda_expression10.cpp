#include <iostream>
using namespace std;

class MyClass {
    int val = 42;
public:
    void show() {
        auto lambda = [this]() {
            cout << "Value: " << val << endl;
        };
        lambda();
    }
};

int main() {
    MyClass obj;
    obj.show();  // Output: Value: 42
    return 0;
}
