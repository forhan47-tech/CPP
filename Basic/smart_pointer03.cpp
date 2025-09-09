#include <iostream>
#include <memory>

using namespace std;

int main() {
    shared_ptr<int> sharedPtr = make_shared<int>(50);
    weak_ptr<int> weakPtr = sharedPtr; // Weak reference to sharedPtr

    cout << "Is expired? " << weakPtr.expired() << endl; // Checks if object is still valid
    return 0;
}
