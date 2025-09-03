#include <iostream>
using namespace std;

int main() {
auto value = 42;       // Deduced as int
cout << "Value: " << value << endl;

auto pi = 3.14;    // Deduced as double
cout << "Pi: " << pi << endl;

auto message = "Hello"; // Deduced as const char*
cout << "Message: " << message << endl;

auto flag = true;   // Deduced as bool
cout << "Flag: " << flag << endl;

const auto ref = 100; // Deduced as const int
cout << "Ref: " << ref << endl;

// ref = 200; // Error: cannot modify a const variable

return 0;

}

