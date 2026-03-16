#include <iostream>
#include <memory>
using namespace std;

int main() {
    auto up = make_unique<int>(10);
    cout << "Value = " << *up << endl;
}