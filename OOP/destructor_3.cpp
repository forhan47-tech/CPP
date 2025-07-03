#include <iostream>
using namespace std;

class Buffer {
private:
    int* data;

public:
    Buffer(int size) {
        data = new int[size];
        cout << "Memory allocated" << endl;
    }

    ~Buffer() {
        delete[] data;
        cout << "Memory deallocated" << endl;
    }
};

int main() {
    Buffer buf(5);
    return 0;
}
