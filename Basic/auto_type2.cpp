#include <iostream>
using namespace std;

int main() {
int value = 100;

auto& ref = value; // ref is a reference to value
cout << "Value: " << ref << endl; // Output: 100

auto* ptr = &value; // ptr is a pointer to value
cout << "Pointer: " << *ptr << endl; // Output: 100

return 0;
}
