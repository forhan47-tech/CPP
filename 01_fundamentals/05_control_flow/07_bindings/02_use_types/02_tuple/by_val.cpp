#include <iostream>
#include <tuple>
using namespace std;

int main() {
    tuple<int, double, string> t{42, 3.14, "Pi"};

    auto [num, val, name] = t; // copies
    num = 100;              

    cout << "Tuple original: " << get<0>(t) << ", " << get<1>(t) << ", " << get<2>(t) << endl;
    cout << "Bindings: " << num << ", " << val << ", " << name << endl;
}
