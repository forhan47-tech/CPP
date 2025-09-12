#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function = abstraction
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle\n";
    }
};

int main() {
    Shape* s = new Circle();  
    s->draw();               
    delete s;                
    return 0;
}
