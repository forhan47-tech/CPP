#include <iostream>
using namespace std;

class Printable {
public:
    virtual void print() = 0;  // Pure virtual function
};

class Report : public Printable {
public:
    void print() override {
        cout << "Printing Report..." << endl;
    }
};

class Invoice : public Printable {
public:
    void print() override {
        cout << "Printing Invoice..." << endl;
    }
};

int main() {
    Report r;   // Cannot instantiate interface
    Invoice i;

    Printable* doc1 = &r;   // polymorphism
    Printable* doc2 = &i;

    doc1->print();  
    doc2->print();  
}
