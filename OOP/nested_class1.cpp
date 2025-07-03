#include <iostream>
using namespace std;

class Laptop {
private:
    string model;

public:
    Laptop(string m) : model(m) {}

    void show() {
        cout << "Laptop Model: " << model << endl;
    }

    // Nested class
    class Battery {
    public:
        void status() {
            cout << "Battery status: 80%" << endl;
        }
    };
};

int main() {
    Laptop hp("HP ProBook");
    hp.show();

    Laptop::Battery b;
    b.status();

    return 0;
}
