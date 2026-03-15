#include <iostream>
using namespace std;

int main() {
    auto divide = [](int x, int y) -> double {
        return (double)x / y; // explicitly returns double
    };
    cout << "Division = " << divide(5, 2) << endl; 
}
