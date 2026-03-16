#include <iostream>
#include <memory>
using namespace std;

int main() {
    auto sp = make_shared<int>(20);
    cout << "Value = " << *sp << endl;
}
