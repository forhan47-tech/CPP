#include <iostream>
#include <memory>
using namespace std;

int main() {
    auto up1 = make_unique<int>(42);
    auto up2 = std::move(up1); // ✅ ownership transferred

    if (up1 == nullptr) {
        cout << "Value in up2 = " << *up2 << endl;
    }
    return 0;
}
