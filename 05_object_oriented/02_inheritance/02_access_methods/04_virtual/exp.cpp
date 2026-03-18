#include <iostream>
using namespace std;

class Device {
public:
    string brand;
};

class Phone : virtual public Device {};
class Tablet : virtual public Device {};

class SmartDevice : public Phone, public Tablet {
public:
    void setBrand(string b) {
        brand = b;   // Only one copy of 'Device'
    }
    void show() {
        cout << "Smart Device Brand: " << brand << endl;
    }
};

int main() {
    SmartDevice sd;
    sd.setBrand("Samsung");
    sd.show();
    return 0;
}
