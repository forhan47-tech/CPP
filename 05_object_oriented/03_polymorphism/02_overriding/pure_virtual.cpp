#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;  // pure virtual function
    virtual ~Shape() {}       // virtual destructor
};

class Circle : public Shape {
public:
    void draw() override { cout << "Drawing Circle" << endl; }
};

class Rectangle : public Shape {
public:
    void draw() override { cout << "Drawing Rectangle" << endl; }
};

int main() {
    Shape* s1 = new Circle();
    Shape* s2 = new Rectangle();

    s1->draw(); 
    s2->draw(); 

    delete s1;  
    delete s2;  
}
