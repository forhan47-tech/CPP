#include <iostream>
using namespace std;

int main() {
    // Lambda with explicit return type
    auto divide = [](float a, float b) -> float {
        if (b != 0)
            return a / b;
        else
            return 0;  
    };

    cout << "10 divided by 2: " << divide(10, 2) << endl;
    cout << "10 divided by 0: " << divide(10, 0) << endl;

    return 0;
}
