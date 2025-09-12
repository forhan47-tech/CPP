#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;  
    virtual ~Shape() {} 
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    // Shape s;              ❌ Not allowed — abstract!
    Shape* s = new Circle();
    s->draw();
    delete s;
    return 0;
}
