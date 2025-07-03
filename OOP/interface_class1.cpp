#include <iostream>
using namespace std;

// Interface class (pure abstract)
class IPrintable {
public:
    virtual void print() = 0;  // Pure virtual function
    virtual ~IPrintable() {}   // Virtual destructor
};

// A class that implements the interface
class Document : public IPrintable {
public:
    void print() override {
        cout << "Printing Document..." << endl;
    }
};

// Another class implementing the same interface
class Report : public IPrintable {
public:
    void print() override {
        cout << "Printing Report..." << endl;
    }
};

int main() {
    IPrintable* d = new Document();
    IPrintable* r = new Report();

    d->print();  // Output: Printing Document...
    r->print();  // Output: Printing Report...

    delete d;
    delete r;
    return 0;
}
