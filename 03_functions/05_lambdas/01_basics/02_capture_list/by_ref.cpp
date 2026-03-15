#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    auto byReference = [&]() {
        b++; // modifies original b
        return a + b;
    };

    cout << "By reference: " << byReference() << endl; 
    cout << "Updated b: " << b << endl; 
}
