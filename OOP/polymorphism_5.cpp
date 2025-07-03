#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() {
        cout << "Drawing shape\n";
    }
};

// Derived class
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing circle\n";
    }
};

int main() {
    Shape* s = new Circle();  // Base class pointer to derived object
    s->draw();                // Calls Circle's draw() at runtime

    delete s;  // Good practice to free memory
    return 0;
}
