#include <iostream>
#include <memory>

using namespace std;

int main() {
    shared_ptr<int> sharedPtr = make_shared<int>(50);
    weak_ptr<int> weakPtr = sharedPtr; // Weak reference to sharedPtr

    // Check if the object still exists
    if (weakPtr.expired()) {
        cout << "Object no longer exists!" << endl;
    } else {
        auto lockedPtr = weakPtr.lock(); // Convert weak_ptr to shared_ptr safely
        cout << "Accessing safely: " << *lockedPtr << endl;
    }

    return 0;
}
