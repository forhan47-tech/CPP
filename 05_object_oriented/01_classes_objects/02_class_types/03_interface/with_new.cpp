#include <iostream>
using namespace std;

class Printable {
public:
    virtual void print() = 0;   // Pure virtual function
    virtual ~Printable() {}     // Virtual destructor
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
    Printable* doc1 = new Report();
    Printable* doc2 = new Invoice();

    doc1->print();  
    doc2->print(); 

    delete doc1;    
    delete doc2;  
}
