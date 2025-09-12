#include <iostream>
using namespace std;

class Sample {
public:
    void showThis() {
        cout << "Address of current object: " << this << endl;
    }
};

int main() {
    Sample s;
    s.showThis();  // Prints memory address
    return 0;
}
