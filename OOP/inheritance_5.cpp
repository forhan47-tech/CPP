#include <iostream>
using namespace std;

// Base class 1
class Reader {
public:
    void read() {
        cout << "Reading books..." << endl;
    }
};

// Base class 2
class Writer {
public:
    void write() {
        cout << "Writing stories..." << endl;
    }
};

// Derived class
class Author : public Reader, public Writer {
public:
    void publish() {
        cout << "Publishing a book!" << endl;
    }
};

int main() {
    Author a;
    a.read();      // From Reader
    a.write();     // From Writer
    a.publish();   // Own method

    return 0;
}
