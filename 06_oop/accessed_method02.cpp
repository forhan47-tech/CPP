#include <iostream>
using namespace std;

class Laptop {
public:
    string brand = "Lenovo";  // Public member : freely accessible

    void showBrand() {      
        cout << "Inside class: " << brand << endl;
    }
};

int main() {
    Laptop lap;

    lap.showBrand();     // ✅ Accessing public member via member function
    cout << "Outside class: " << lap.brand << endl;  // ✅ Direct access from main
    return 0;
}
