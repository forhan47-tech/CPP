#include <iostream>
#include <memory>
using namespace std;

int main() {
    auto sp = make_shared<int>(200);
    weak_ptr<int> wp = sp; // weak reference

    if (wp.expired()) {
        cout << "Object no longer exists\n";
    }
}
