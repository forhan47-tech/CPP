#include <iostream>
using namespace std;

int main() {
    // **Implicit Type Conversion (Type Promotion)**
    int num = 10;
    double result = num; 
    cout << "Implicit Conversion: Integer " << num << " converted to Double " << result << endl;

    // **Explicit Type Conversion (Using static_cast)**
    double pi = 3.14159;
    int Pi = static_cast<int>(pi); 
    cout << "Explicit Conversion: Double " << pi << " converted to Integer " << Pi << endl;
    
    return 0;
}

