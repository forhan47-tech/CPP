#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;   // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};

int main() {
    Circle c;
    Shape* s1 = &c;
    s1->draw();  
    return 0;
}
