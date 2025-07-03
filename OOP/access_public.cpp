#include <iostream>
using namespace std;

class Laptop {
public:
    string brand = "Lenovo";  // Public member

    void showBrand() {        // Member function (regular from inside)
        cout << "Inside class: " << brand << endl;
    }
};

int main() {
    Laptop myLaptop;

    myLaptop.showBrand();     // ✅ Accessing public member via member function
    cout << "Outside class: " << myLaptop.brand << endl;  // ✅ Direct access from main

    return 0;
}
