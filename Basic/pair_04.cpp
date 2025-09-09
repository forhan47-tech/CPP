#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<string, int> p = {"Apple", 100};

    auto [name, price] = p;
    cout << name << ": " << price << endl;

    return 0;
}
