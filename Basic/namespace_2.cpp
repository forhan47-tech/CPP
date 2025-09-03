#include <iostream>
using namespace std;

namespace Math {
    double PI = 3.14159;
    float Value = 2.71828;
}

namespace Functions {
    double square(double x) {
        return x * x;
    }
    
    float cube(float x) {
        return x * x * x;
    }
}

int main() {
    cout << "Pi: " << Math::PI << "\n";
    cout << "Square of 4: " << Math::Value << "\n";
    
    cout << "Square of 3: " << Functions::square(3) << "\n";
    cout << "Cube of 2: " << Functions::cube(2) << "\n";
    return 0;
}

