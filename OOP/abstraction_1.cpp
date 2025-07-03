#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function = abstraction
};

// Derived class implementing the abstract interface
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle\n";
    }
};

int main() {
    Shape* s = new Circle();  // Base class pointer to derived object
    s->draw();                // Calls Circle's draw()
    delete s;                 // Clean up memory
    return 0;
}
