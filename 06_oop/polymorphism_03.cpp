#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing shape\n";
    }
    virtual ~Shape() {}  // always use virtual destructor with polymorphism
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing circle\n";
    }
};

int main() {
    Shape* s = new Circle();  
    
    s->draw();               
    delete s; 
    return 0;
}
