#include <iostream>
using namespace std;

class Appliance {
public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
    virtual ~Appliance() {} // Virtual destructor for proper cleanup
};

class Fan : public Appliance {
public:
    void turnOn() override {
        cout << "Fan is now ON\n";
    }

    void turnOff() override {
        cout << "Fan is now OFF\n";
    }
};

class Light : public Appliance {
public:
    void turnOn() override {
        cout << "Light is now ON\n";
    }

    void turnOff() override {
        cout << "Light is now OFF\n";
    }
};

int main() {
    Appliance* fan = new Fan();
    Appliance* light = new Light();

    fan->turnOn();
    light->turnOn();

    fan->turnOff();
    light->turnOff();

    delete fan;
    delete light;

    return 0;
}
