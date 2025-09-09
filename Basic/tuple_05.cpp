#include <iostream>
#include <tuple>
using namespace std;

int main() {
    tuple<string, int, double> t = make_tuple("Apple", 100, 2.5);

    auto [name, quantity, price] = t;
    cout << name << ": " << quantity << " units at $" << price << endl;

    return 0;
}
