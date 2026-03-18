#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;   // pure virtual function
    virtual ~Shape() {}        // virtual destructor
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    Shape* ptr = new Circle();
    ptr->draw();   
    delete ptr;   
}
