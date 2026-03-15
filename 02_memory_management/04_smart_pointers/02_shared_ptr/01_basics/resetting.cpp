#include <iostream>
#include <memory>
using namespace std;

int main() {
    auto sp = make_shared<int>(200);
    cout << *sp << endl;

    sp.reset(); // release ownership
    if (!sp) {
        cout << "Pointer is empty\n";
    }
    return 0;
}
