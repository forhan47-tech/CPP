#include <iostream>
using namespace std;

class Engine {
    int horsepower;

public:
    Engine(int hp) : horsepower(hp) {}

    // Declare a friend function
    friend void showInfo(const Engine& e);
};

// Define the friend function
void showInfo(const Engine &e) {
    cout << "Horsepower: " << e.horsepower << endl;
}

int main() {
    Engine e1(300);
    showInfo(e1);  // Directly calls the friend function
    return 0;
}
