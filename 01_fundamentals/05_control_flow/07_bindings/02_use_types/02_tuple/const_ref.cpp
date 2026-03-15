#include <iostream>
#include <tuple>
using namespace std;

int main() {
    tuple<int, double, string> t{42, 3.14, "Pi"};
    const auto& [num, val, name] = t; // can't modify
    cout << "Tuple read-only: " << num << ", " << val << ", " << name << endl;
}
