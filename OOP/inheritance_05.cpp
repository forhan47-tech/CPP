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
class Editor : public Reader, public Writer {
public:
    void publish() {
        cout << "Publishing a book!" << endl;
    }
};

int main() {
    Editor e;

    cout << "Multiple Inheritance Example:" << endl;
    e.read();     
    e.write();   
    e.publish();   
    return 0;
}
