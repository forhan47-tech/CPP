#include <iostream>
using namespace std;

int main() {
    int age = 15;

    try {
        if (age < 18)
            throw age; 
        cout << "Access granted.\n";
    } catch (int invalidAge) {
        cout << "Access denied. Age is: " << invalidAge << endl;
    }
    return 0;
}
