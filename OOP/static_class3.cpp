#include <iostream>
using namespace std;

class Product {
public:
    static int totalProducts; // Static data member
    string name;              // Non-static

    Product(string pname) {
        name = pname;
        totalProducts++;      // Shared count updated
    }

    void showDetails() {
        cout << "Product Name: " << name << endl;
    }

    static void showCount() {
        cout << "Total Products Created: " << totalProducts << endl;
    }
};

int Product::totalProducts = 0;

int main() {
    Product p1("Laptop");
    Product p2("Tablet");
    p1.showDetails();
    p2.showDetails();
    Product::showCount(); // Accessing static function

    return 0;
}
