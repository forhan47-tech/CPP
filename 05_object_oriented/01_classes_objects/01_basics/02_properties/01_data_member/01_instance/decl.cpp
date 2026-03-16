#include <iostream>
using namespace std;

class Car {
public:
    string brand;  // data member
    int year;

    void show() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car c1, c2; // two objects

    c1.brand = "Toyota"; c1.year = 2020;
    c2.brand = "Honda";  c2.year = 2022;

    c1.show();
    c2.show();
}
