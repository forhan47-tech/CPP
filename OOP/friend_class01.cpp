#include <bits/stdc++.h>
using namespace std;

class Engine {
    int horsepower;
    friend class Car;  // Car can access private members of Engine

public:
    Engine(int hp) : horsepower(hp) {}    
};

class Car {
public:
    void showInfo(const Engine& e) {
        cout << "Horsepower: " << e.horsepower << endl;
    }    
};

int main() {
    Engine e1(300);
    Car c1;
    c1.showInfo(e1); 
    return 0;
}
