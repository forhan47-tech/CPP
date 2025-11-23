#include <iostream>
using namespace std;

template <typename T>
class Container {
private:
    T data;
public:
    Container(T value) : data(value) {}
    T get() const { 
        return data; 
    }
};

int main() {
    Container<int> c1(42);
    cout << "Stored value: " << c1.get() << endl;

    Container<string> c2("Hello, NAIMUDDIN!");
    cout << "Stored string: " << c2.get() << endl;

    return 0;
}
