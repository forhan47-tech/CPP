#include <iostream>
using namespace std;

class Buffer {
private:
    int* data;

public:
    Buffer(int val) {
        data = new int(val);
    }

    Buffer(Buffer&& other) noexcept {
        data = other.data;
        other.data = nullptr;
        cout << "Move constructor called" << endl;
    }

    ~Buffer() {
        delete data;
    }

    void show() {
        if (data)
            cout << "Data: " << *data << endl;
        else
            cout << "Empty (moved-from)" << endl;
    }
};

int main() {
    Buffer a(77);
    Buffer b = std::move(a);  // Move constructor
    a.show();
    b.show();
    return 0;
}
