#include <iostream>
using namespace std;

namespace Functions {
    double square(double x) {
        return x * x;
    }
    
    float cube(float x) {
        return x * x * x;
    }
}

int main() {
    cout << "Square of 3: " << Functions::square(3) << "\n";
    cout << "Cube of 2: " << Functions::cube(2) << "\n";
    return 0;
}

