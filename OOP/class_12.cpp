#include <iostream>
using namespace std;

class Hero {
public:
    string name = "IronMan";
};

int main() {
    Hero h;                // Create original object
    Hero& alias = h;       // Create a reference alias to object h

    alias.name = "WarMachine";  // Modify the object via the alias

    // Output results
    cout << "Hero name via original object: " << h.name << endl;
    cout << "Hero name via reference alias: " << alias.name << endl;

    // Show they share the same memory address
    cout << "Address of h: " << &h << endl;
    cout << "Address of alias: " << &alias << endl;

    return 0;
}
